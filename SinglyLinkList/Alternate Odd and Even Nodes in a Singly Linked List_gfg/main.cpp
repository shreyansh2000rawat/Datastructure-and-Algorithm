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
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

Node* rearrange(struct Node** head_ref)
{

    struct Node* es = NULL;
    struct Node* ee = NULL;
    struct Node* os = NULL;
    struct Node* oe = NULL;

    for(struct Node* curr = (*head_ref);curr!=NULL;curr=curr->next)
    {
        int x = curr->data;
        if(x%2==0)
        {
            if(es==NULL)
            {
                es = curr;
                ee = es;
            }
            else
            {
                ee->next=curr;
                ee=ee->next;
            }
        }
        else
        {
            if(os==NULL)
            {
                os = curr;
                oe = os;
            }
            else
            {
                oe->next=curr;
                oe=oe->next;
            }
        }
    }

    oe->next = es;
    ee->next = NULL;

    for(struct Node* current = os;current!=NULL;current=current->next)
    {
        cout<<current->data<<" ";
    }

}

int main()
{
    struct Node* head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    push(&head, 22);
    push(&head, 13);
    push(&head, 15);
    push(&head, 17);

    rearrange(&head);

    return 0;
}
