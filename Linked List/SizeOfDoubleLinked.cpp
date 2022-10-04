#include <bits stdc++.h="">
using namespace std;

struct llNode
{
    int data;
    struct llNode *next;
    struct llNode *prev;
};


void push(struct llNode** head_ref, int data)
{
    struct llNode* new_node = new llNode;
    new_node->data = data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
    (*head_ref)->prev = new_node ;
    (*head_ref) = new_node;
}


int SizeOfList(struct llNode *temp)
{
    int ListSize = 0;
    while(temp != NULL)
    {
        ListSize++;
        temp = temp->next;
    }
    return ListSize;
}

int main()
{
    struct llNode* head = NULL;
    push(&head, 9);
    push(&head, 7);
    push(&head, 5);
    push(&head, 3);
    cout <<"Size of the doubly linked list: "<< SizeOfList(head);
    return 0;
}
