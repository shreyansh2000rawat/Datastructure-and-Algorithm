#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref,int new_data)
{
    struct Node* new_node = new Node;
    struct Node *temp = (*head_ref);
    new_node->data = new_data;
    new_node->next = (*head_ref);

    if((*head_ref)!=NULL)
    {
        while(temp->next!=(*head_ref))
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    else
    {
        new_node->next=new_node;
    }
    (*head_ref) = new_node;

}

void printList(struct Node** head_ref)
{
    struct Node *temp = (*head_ref);
    if ((*head_ref) != NULL)
    {
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        while (temp != (*head_ref));
    }
}

int main()
{
    struct Node *head = NULL;

    /* Created linked list will be 11->2->56->12 */
    push(&head, 12);
    push(&head, 56);
    push(&head, 2);
    push(&head, 11);

    cout << "Contents of Circular Linked List\n ";
    printList(&head);
    return 0;
}
