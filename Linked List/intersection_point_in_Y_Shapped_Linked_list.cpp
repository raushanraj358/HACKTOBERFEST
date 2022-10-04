
// question line :- https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

// class Node{
//    int data;
//    Node *next;
//    Node(int x) {
//     data = x;
//     next = NULL;
//   }
// };

int intersectPoint(Node* head1, Node* head2)
{
       Node *p = head1; //reversing of linked list with head = head1;
    Node *q = NULL;
    Node *r = NULL; 
    while(p){
        r = q;
        q = p;
        p = p->next;
        q->next = r; 
    }
    
    head1->next = head2; // pointing head1 on head2;
    head1 = q;

// now linked list have one loop and we have to find the starting point of loop;

    Node *slow = head1;
    Node *fast = head1->next;
    if(fast==NULL)return -1;
    fast = fast->next;
    if(fast==NULL)return -1;
    slow = slow->next;
    
    while(slow!=fast){
      fast = fast->next;
      if(fast==NULL)return -1;
      fast= fast->next;
      if(fast==NULL)return -1;
      slow = slow->next;
    }
    slow = head1;
    while(slow!=fast){
    slow = slow->next;
    fast = fast->next;
    }
    return slow->data;
}