#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref,int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void removeDuplicate(struct Node** head_ref)
{
    struct Node* curr = (*head_ref);
    struct Node* prev = NULL;
    unordered_set<int> seen;
    while(curr!=NULL)
    {
        if (seen.find(curr->data) != seen.end())
        {
           prev->next = curr->next;
           delete (curr);
        }
        else
        {
           seen.insert(curr->data);
           prev = curr;
        }
        curr = prev->next;
    }
}

void printList(struct Node** head_ref)
{
    struct Node* current = (*head_ref);
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
}

int main()
{
    struct Node* head = NULL;

    push(&head, 20);
    push(&head, 100);
    push(&head, 40);
    push(&head, 40);
    push(&head, 20);
    push(&head, 20);
    push(&head, 40);

    removeDuplicate(&head);
    printList(&head);
    return 0;
}
