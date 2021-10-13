// #include <iostream>
// #include <string.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *nxt;
// };
// int main()
// {
//     int data;
//     int i = 0;

//     node *head = NULL;

//     node *n = new node;
//     cin >> data;
//     n->data = data;
//     head = n;

//     node *n2 = new node;
//     cin >> data;
//     n2->data = data;
//     n->nxt = n2;

//     node *n3 = new node;
//     cin >> data;
//     n2->data = data;
//     n2->nxt = n3;

//     node *n4 = new node;
//     cin >> data;
//     n4->data = data;
//     n3->nxt = n4;
//     n4->nxt=NULL;

//     cout << "ENTER THE ELEMENT TO BE INSERTED!" << endl;
//     cin >> data;
//     node *n0 = new node;
//     n0->data = data;
//     n0->nxt = n;
//     head = n0;

//     cout << "AFTER ADDING THE NEW ELEMENT THE LINKED LIST IS:" << endl;
//     i = 0;
//     cout << "HEAD->";
//     while (i < 5)
//     {
//         cout << head->data << "->";
//         head = head->nxt;
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void addFirst(struct node **head, int val)
{
    //create a new node
    struct node *newNode = new node;
    newNode->data = val;

    newNode->next = *head;

    *head = newNode;
}

void dellFirst(struct node **head)
{
    //create a new node
    node *temp = *head;
    *head = temp->next;
    delete (temp);
}

void addpart(struct node **head, int data, int pos)
{
    node *temp = *head;

    if (pos == 1)
    {
        node *n_node = new node;
        n_node->next = *head;
        n_node->data = data;
        *head = n_node;
    }

    else
    {
        while (pos - 2)
        {
            temp = temp->next;
            pos--;
        }
        node *n_node = new node;
        n_node->data = data;
        n_node->next = temp->next;
        temp->next = n_node;
    }
}

void dellpart(node **head, int pos)
{
    node *temp = *head;
    node *del = temp->next;

    if (pos == 1)
    {
        *head = temp->next;
        delete (temp);
    }

    else
    {
        while (pos - 2)
        {
            temp = temp->next;
            del = temp->next;
            pos--;
        }

        temp->next = temp->next->next;
        delete (del);
    }
}

void printList(struct node *head)
{
    struct node *temp = head;

    //iterate the entire linked list and print the data
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;

    addFirst(&head, 10);
    addFirst(&head, 20);
    addFirst(&head, 30);

    // printList(head);

    addpart(&head, 15, 4);
    // dellpart(&head, 2);

    printList(head);

    // dellFirst(&head);
    dellpart(&head, 1);

    printList(head);

    return 0;
}