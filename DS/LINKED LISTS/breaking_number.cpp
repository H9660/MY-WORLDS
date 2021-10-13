// breaks the numbers into its digits and then we show the digits using linked lists!

#include <iostream>
#include <string.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void append(Node **head_ref, int new_data)
{
    /* 1. allocate node */
    Node *new_node = new Node();

    Node *last = *head_ref; /* used in step 5*/

    /* 2. put in the data */
    new_node->data = new_data;

    /* 3. This new node is going to be
    the last node, so make next of
    it as NULL*/
    new_node->next = NULL;

    /* 4. If the Linked List is empty,
    then make the new node as head */
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}

int main()
{
    int n;
    cin >> n;
    int i;
    Node *head = NULL;
    i = n % 10;
    n /= 10;
    Node *num = new Node;
    num->data = i;
    head = num;

    while (n > 0)
    {

        i = n % 10;
        n /= 10;
        append(&head, i);
    }

    Node *temp = head;
    
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}