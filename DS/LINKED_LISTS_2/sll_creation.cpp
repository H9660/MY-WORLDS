#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void insert(int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void display()
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

void mulbyten(struct Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        temp->data *= 10;
        temp = temp->next;
    }
}

Node *reverse(Node *head) //prev-> 9-> 10 ->11 ->12->13->67
{
    Node *prev;
    Node *n;
    Node *curr;
    prev = NULL;
    curr = head;
    n = curr;
    while (n != NULL)
    {
        n = n->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    head = prev;
    return head;
}
int main()
{
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);

    mulbyten(head);
    head = reverse(head);

    display();

    return 0;
}

bool has_cycle()