#include <iostream>
#include <bits/stdc++.h>

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
    struct Node* next_next;
    while(curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            next_next = curr->next->next;
            free(curr->next);
            curr->next = next_next;
        }
        else
        {
            curr=curr->next;
        }
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

    push(&head, 100);
    push(&head, 100);
    push(&head, 40);
    push(&head, 40);
    push(&head, 20);
    push(&head, 20);
    push(&head, 20);

    removeDuplicate(&head);
    printList(&head);
    return 0;
}
