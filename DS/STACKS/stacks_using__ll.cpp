    #include <iostream>
#include <string.h>
using namespace std;

class node
{
public:
    int data;
    node *n;
};

int isempty(node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
        return 0;
}

int isfull()
{
    node *n = new node;
    if (n == NULL)
    {
        return 1;
    }
    else
        return 0;
}

void pushstacA(node *&top, int data)

{
    if (isfull())
        cout << "STACK IS FULL! NO MORE PUSHING NOW" << endl;
    node *n1 = new node;

    n1->data = data;
    n1->n = NULL;
    n1->n = top;
    top = n1;
}

void popstacA(node *&top)
{
    if (isempty(top))
        cout << "STACK IS ALREADY EMPTY! NO MORE POPPING NOW!!";
    else
    {
        node *temp = top;
        top = top->n;
        free(temp);
        temp = NULL;
    }
}
void printstacA(node *top)
{
    node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << "\n";
        temp = temp->n;
    }
}

int main()
{
    string s;
    int ele;
    system("cls");
    int n;
    node *top = NULL;
    do
    { // node*temp=top;
        cout << "HOWDY! ENTER THE NUMBER OF ELEMENTS OF THE STACK!" << endl;
        cin >> n;
        for (int  i = 0; i < n; i++)
        {
            cout << "ENTER THE DATA FOR ELEMENT " << i + 1 << ":"
                 << "\t";
            cin >> ele;
            pushstacA(top, ele);
        }
        cout << endl;
        cout << "THE STACK THAT WE HAVE IS:" << endl;
        printstacA(top);
        cout << "WANT TO PUSH MORE ELEMENTS?" << endl;
        cin >> s;
    } while (s == "YES" || s == "yes" || s == "y" || s == "Y");

    if (s == "NO" || s == "no" || s == "n" || s == "N")
        cout << "OK! SEE YOU NEXT TIME!" << endl;
    return 0;
}
