//Program for the boundary traversal of a Binary Tree

#include <bits/stdc++.h>
using namespace std;

//Structure of binary tree
struct Node {
  int data;
  struct Node * left, * right;
  
  Node(int d){
        this->data = d;
		left = right = NULL;
    }
};

//Function to check for Leaf Nodes
bool isLeaf(Node * root) {
  return !root -> left && !root -> right;
}

//Function to traverse and store left boundary nodes (excluding the leaf nodes)
void addLeftBoundary(Node * root, vector < int > & res) {
  Node * cur = root -> left;
  while (cur) {
    if (!isLeaf(cur)) res.push_back(cur -> data);
    if (cur -> left) cur = cur -> left;
    else cur = cur -> right;
  }
}

//Function to traverse and store Right boundary nodes (excluding the leaf nodes)
void addRightBoundary(Node * root, vector < int > & res) {
  Node* cur = root -> right;
  vector < int > tmp;
  while (cur) {
    if (!isLeaf(cur)) tmp.push_back(cur -> data);
    if (cur -> right) cur = cur -> right;
    else cur = cur -> left;
  }
  for (int i = tmp.size() - 1; i >= 0; --i) {
    res.push_back(tmp[i]);
  }
}

//Function to traverse and store Leaf Nodes
void addLeaves(Node * root, vector < int > & res) {
  if (isLeaf(root)) {
    res.push_back(root -> data);
    return;
  }
  if (root -> left) addLeaves(root -> left, res);
  if (root -> right) addLeaves(root -> right, res);
}

//Function to Traverse the boundary Nodes of given Binary tree.
vector < int > printBoundary(Node * root) {
  vector < int > res;
  if (!root) return res;

  if (!isLeaf(root)) res.push_back(root -> data);

  addLeftBoundary(root, res);

  // add leaf nodes
  addLeaves(root, res);
  
  addRightBoundary(root, res);
  return res;
}


int main() {

  Node* root = new Node(1);
  root -> left = new Node(2);
  root -> left -> left = new Node(3);
  root -> left -> left -> right = new Node(4);
  root -> left -> left -> right -> left = new Node(5);
  root -> left -> left -> right -> right = new Node(6);
  root -> right = new Node(7);
  root -> right -> right = new Node(8);
  root -> right -> right -> left = new Node(9);
  root -> right -> right -> left -> left = new Node(10);
  root -> right -> right -> left -> right = new Node(11);

  vector<int> boundaryTraversal;
  boundaryTraversal = printBoundary(root);

  cout << "The Boundary Traversal is : ";
  for (int i = 0; i < boundaryTraversal.size(); i++) {
    cout << boundaryTraversal[i] << " ";
  }
  return 0;
}