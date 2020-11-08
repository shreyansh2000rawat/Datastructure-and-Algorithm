#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

void inorder(Node* temp)
{
    if(!temp)
        return;
    inorder(temp->left);
    cout<<temp->key<<" ";
    inorder(temp->right);
}

void inserts(Node* temp,int key)
{
    queue<Node*> q;
    q.push(temp);

    while(!q.empty())
    {
      Node* temp = q.front();
      q.pop();
      if(!temp->left) {
        temp->left = new Node(key);
        break;
      } else
            q.push(temp->left);
      if(!temp->right) {
        temp->right = new Node(key);
        break;
      }
        else
            q.push(temp->right);
    }
}

int main()
{
    Node* root = new Node(10);
    root->left = new Node(11);
    root->left->left = new Node(7);
    root->right = new Node(9);
    root->right->left = new Node(15);
    root->right->right = new Node(8);

    cout << "Inorder traversal before insertion:";
    inorder(root);

    int key = 12;
    inserts(root, key);

    cout << endl;
    cout << "Inorder traversal after insertion:";
    inorder(root);

    return 0;
}
