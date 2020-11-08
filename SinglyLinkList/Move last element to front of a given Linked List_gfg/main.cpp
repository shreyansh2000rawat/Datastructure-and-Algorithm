#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = new Node;

    /* put in the data  */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

void moveLastToFirst(struct Node** head_ref)
{
     struct Node* curr = (*head_ref);
     while(curr->next->next != NULL )
     {
         curr = curr->next;
     }
     curr->next->next = (*head_ref);
     (*head_ref) = curr->next;
     curr->next = NULL;

}

void printList(struct Node** head_ref)
{
    struct Node* first = (*head_ref);
    while(first!= NULL )
     {
         cout<<first->data<<" ";
         first = first->next;
     }
     cout<<endl;
}

int main()
{
    struct Node* head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    printList(&head);
    moveLastToFirst(&head);
    printList(&head);
    return 0;
}
