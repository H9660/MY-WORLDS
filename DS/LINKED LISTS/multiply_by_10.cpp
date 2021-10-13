#include <iostream>
#include <string.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

void addbeg(node **head, int data)
{

    node *n = new node;
    n->data = data;
    if (*head = NULL)
    {
        *head = n;
        n->next = *head;
    }

    n->next = NULL;
    
}

int main()
{

    node *head = NULL;
    addbeg(&head, 1);
    addbeg(&head, 1);
    addbeg(&head, 1);
    addbeg(&head, 1);
    addbeg(&head, 1);

    return 0;
}