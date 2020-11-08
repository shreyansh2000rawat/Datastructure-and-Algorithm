#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

Node *push( Node* head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node;

    /* 2. put in the data  */
    new_node->data  = new_data;

    /* 3. Make next of new node as head */
    new_node->next = head_ref;

    /* 4. move the head to point to the new node */
    head_ref  = new_node;
}

int nthnode(Node * head_ref,int cnt)
{
    Node *curr = head_ref;
    int nt = 1;
    while(nt!=cnt)
    {
        curr=curr->next;
        nt=nt+1;
        if(curr==NULL)
            return -1;
    }
    cout<<curr->data<<endl;
}

int enthnode(Node * head_ref,int cnt)
{
    Node *curr = head_ref;
    int nt = 0;
    while(curr!=NULL)
    {
        curr=curr->next;
        nt = nt +1;
    }
    int ent = 1;
    curr = head_ref;
    while(ent!=nt-cnt+1)
    {
        curr=curr->next;
        ent = ent + 1;
        if(curr==NULL)
            return -1;
    }
    cout<<curr->data<<endl;
}

void printMiddle(struct Node *head)
{
    struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;

    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        cout<<slow_ptr->data<<endl;
    }
}

void printlist(Node * head_ref)
{
    Node *curr = head_ref;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

bool searc(Node *head_ref,int datas)
{
    Node *curr = head_ref;
    while(curr!=NULL)
    {
        if(curr->data == datas)
            {
                return true;
            }
        else
        {
            curr=curr->next;
        }
    }
    return false;
}

int main()
{
    Node *head_ref = NULL;
    head_ref = push(head_ref,20);
    head_ref = push(head_ref,10);
    head_ref = push(head_ref,5);
    head_ref = push(head_ref,15);
    head_ref = push(head_ref,35);
    printMiddle(head_ref);
    return 0;
}
