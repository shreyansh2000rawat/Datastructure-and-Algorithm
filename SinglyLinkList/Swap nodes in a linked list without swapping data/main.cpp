#include <iostream>

using namespace std;

struct Node{
    int data;
	struct Node* next;

};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void swapNodes(struct Node** head_ref, int x, int y)
{
    if (x == y) return;

    struct Node* prevX = NULL;
    struct Node* currX = *head_ref;

    while (currX && currX->data != x)
   {
    prevX = currX;
    currX = currX->next;
   }

   struct Node* prevY = NULL;
   struct Node* currY = *head_ref;

   while (currY && currY->data != y)
   {
    prevY = currY;
    currY = currY->next;
   }

   if (currX == NULL || currY == NULL)
   return;

   if (prevX != NULL)
    prevX->next = currY;
else // Else make y as new head
    *head_ref = currY;

// If y is not head of linked list
if (prevY != NULL)
    prevY->next = currX;
else // Else make x as new head
    *head_ref = currX;

// Swap next pointers
Node *temp = currY->next;
currY->next = currX->next;
currX->next = temp;

}
int main()
{
    Node *start = NULL;

    /* The constructed linked list is:
    1->2->3->4->5->6->7 */
    push(&start, 7);
    push(&start, 6);
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);

    cout << "Linked list before calling swapNodes() ";


    swapNodes(&start, 4, 3);

    cout << "\nLinked list after calling swapNodes() ";

    return 0;
}
