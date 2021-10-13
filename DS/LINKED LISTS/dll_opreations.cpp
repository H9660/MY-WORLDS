// #include <iostream>
// #include <string.h>
// using namespace std;
// class dnode
// {
// public:
//     int data;
//     dnode *next;
//     dnode *prev;
// };

// dnode *addnode(int data, dnode **head)
// {
//     dnode *n = new dnode;
//     n->next = NULL;
//     n->data = data;
//     n->prev = *head;

//     return *head;
// }

// int main()
// {
//     dnode *head = new dnode;
//     head = NULL;
//     addnode(10, &head);
//     addnode(10, &head);
//     addnode(10, &head);
//     addnode(10, &head);

//     dnode *temp = head;

//       while (temp != NULL)
//     {
//         printf("%d->", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");

//     return 0;
// }

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

void deletebef(struct Node **head)

{
    Node *temp = *head;
    *head = temp->next;
    temp->next->prev = NULL;
    delete (temp);
};

void insertBef(struct Node **head_ref,
               struct Node *next_node, int new_data)
{

    if (next_node == NULL)
    {
        cout << "the given next node cannot be NULL";
        return;
    }

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->prev = next_node->prev;

    next_node->prev = new_node;

    new_node->next = next_node;

    if (new_node->prev != NULL)
        new_node->prev->next = new_node;

    else
        (*head_ref) = new_node;

}

void printList(struct Node *node)
{
    struct Node *last;

    while (node != NULL)
    {
        cout << "  " << node->data;
        last = node;
        node = node->next;
    }
}

int main()
{

    struct Node *head = NULL;
    push(&head, 7);

    push(&head, 1); 

    push(&head, 4);

    insertBef(&head, head->next, 8);

    deletebef(&head);   

     printList(head);

    getchar();
    return 0;
}
