#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new Node;

	new_node->data = new_data;

	new_node->next = (*head_ref);
	new_node->prev = NULL;

	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	(*head_ref) = new_node;
}

/* insert a new node after the given node */
void insertAfter(struct Node* prev_node, int new_data)
{
	if (prev_node == NULL) {
		cout<<"the given previous node cannot be NULL";
		return;
	}
	struct Node* new_node = new Node;

	new_node->data = new_data;

	new_node->next = prev_node->next;

	prev_node->next = new_node;

	new_node->prev = prev_node;

	/* 7. Change previous of new_node's next node */
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
}

/* appends a new node at the end */
void append(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new Node;

	struct Node* last = *head_ref;

	new_node->data = new_data;

	new_node->next = NULL;

	if (*head_ref == NULL) {
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	new_node->prev = last;

	return;
}

void insertBefore(struct Node** head_ref, struct Node* next_node, int new_data)
{
    if (next_node == NULL) {
       cout<<"the given next node cannot be NULL";
        return;
    }
    struct Node* new_node = new Node;

    new_node->data = new_data;

    new_node->prev = next_node->prev;

    next_node->prev = new_node;

    new_node->next = next_node;

    if (new_node->prev != NULL)
        new_node->prev->next = new_node;

    else
        (*head_ref) = new_node;

}

void deleteNode(struct Node** head_ref, struct Node* del)
{
    if (*head_ref == NULL || del == NULL)
        return;
    if (*head_ref == del)
        *head_ref = del->next;
    if (del->next != NULL)
        del->next->prev = del->prev;
    if (del->prev != NULL)
        del->prev->next = del->next;
    free(del);
    return;
}

void reverse(Node **head_ref)
{
    Node *temp = NULL;
    Node *current = *head_ref;

    /* swap next and prev for all nodes of
    doubly linked list */
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    /* Before changing the head, check for the cases like empty
        list and list with only one node */
    if(temp != NULL )
        *head_ref = temp->prev;
}

void printList(struct Node* node)
{
    struct Node* last;
    cout<<"\nTraversal in forward direction \n";
    while (node != NULL) {
       cout<<node->data;
        last = node;
        node = node->next;
    }

    cout<<"\nTraversal in reverse direction \n";
    while (last != NULL) {
        cout<<last->data;
        last = last->prev;
    }
}
int main()
{
    struct Node* head = NULL;
    push(&head, 7);

    push(&head, 1);

    push(&head, 4);

    insertBefore(&head, head->next, 8);
    deleteNode(&head, head->next);

    cout<<"Created DLL is: ";
    printList(head);

    return 0;
}
