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

int countNodes(struct Node *n)
{
    int res = 1;
    struct Node *temp = n;
    while (temp->next != n)
    {
        res++;
        temp = temp->next;
    }
    return res;
}

int countNodesinLoop(struct Node** head_ref)
{
    struct Node *slow_p = (*head_ref);
    struct Node *fast_p = (*head_ref);

    while (slow_p && fast_p &&
                     fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;

        if (slow_p == fast_p)
            return countNodes(slow_p);
    }
    return 0;
}

int main()
{
    struct Node* head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    head->next->next->next->next = head;
    cout<<countNodesinLoop(&head);
    return 0;
}
