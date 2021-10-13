#include <iostream>
#include <string.h>
using namespace std;
class node
{
public:
    int data;
    node *n;
};

void createnode(node *&tope, int ele)
{
    node *n1 = new node;
    n1->data = ele;
    n1->n = NULL;
    n1->n = tope;
    tope = n1;
}

void printlist(node *&top)
{
    node *temp = top;

    while (temp != NULL)
    {
        cout << "->" << temp->data;
        temp = temp->n;
    }
}
void createlist(node *top)
{
    int n;
    int ele;
    int i = 0;
    cout << "ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER: "
         << "\n";
    cin >> n;
    cout << "OK!" << endl;
    while (i < n)
    {
        cout << "ENTER THE ELEMENT " << n - i << ":"
             << "\t";
        cin >> ele;
        createnode(top, ele);
        i++;
    }
}
int main()
{
    system("cls");

    node *top=NULL;
    createlist(top);
    printlist(top);

    return 0;
}