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

void reverseList(struct Node** headref);
void _delLesserNodes(struct Node* head);

/* Deletes nodes which have a node with
greater value node on left side */
void delLesserNodes(struct Node** head_ref)
{
    /* 1) Reverse the linked list */
    reverseList(head_ref);

    /* 2) In the reversed list, delete nodes
    which have a node with greater value node
    on left side. Note that head node is never
    deleted because it is the leftmost node.*/
    _delLesserNodes(*head_ref);

    /* 3) Reverse the linked list again to
    retain the original order */
    reverseList(head_ref);
}

void _delLesserNodes(struct Node* head)
{
    struct Node* current = head;
    struct Node* maxnode = head;
    struct Node* temp;

    while (current != NULL &&
           current->next != NULL)
    {
        if (current->next->data < maxnode->data)
        {
            temp = current->next;
            current->next = temp->next;
            free(temp);
        }
        else
        {
            current = current->next;
            maxnode = current;
        }
    }
}

void reverseList(struct Node** headref)
{
    struct Node* current = *headref;
    struct Node* prev = NULL;
    struct Node* next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *headref = prev;

}

void printList(struct Node* head)
{
    while (head != NULL)
    {
        cout << " " << head->data ;
        head = head->next;
    }
    cout << "\n" ;
}

int main()
{
    struct Node* head = NULL;

    /* Create following linked list
    12->15->10->11->5->6->2->3 */
    push(&head, 3);
    push(&head, 2);
    push(&head, 6);
    push(&head, 5);
    push(&head, 11);
    push(&head, 10);
    push(&head, 15);
    push(&head, 12);

    cout << "Given Linked List \n" ;
    printList(head);

    delLesserNodes(&head);

    cout << "Modified Linked List \n" ;
    printList(head);

    return 0;
}

