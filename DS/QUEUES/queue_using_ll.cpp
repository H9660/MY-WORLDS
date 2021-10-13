#include <iostream>
#include <string.h>
using namespace std;
class queue
{
public:
    int data;
    queue *n;
    queue *f;
    queue *b;
};

void en(queue &a, int val)
{
    queue *k = new queue;

    if (a.b =  NULL)
    {
        a.f = a.b = k;
        k->n = NULL;
        k->data = val;
        a.b=a.b->n;
    }
    else
    {
        a.b->n = k;
        k->n = NULL;
        k->data = val;
        a.b = a.b->n;
    }
}

void print(queue &a)
{
    int i = 1;
    queue *temp = new queue;
    temp = a.f;
    while (temp != a.b->n)
    {
        cout << i << "." << temp->data << endl;
        i++;
    }
}
int main()
{
    queue a;
    a.f = a.b = NULL;
    int size;
    int val;
    cin >> size;

    cout << "ENTER THE QUEUE ELEMENTS :" << endl;
    for (size_t i = 0; i < size; i++)
    {
        cin >> val;
        en(a, val);
    }

    print(a);

    return 0;
}