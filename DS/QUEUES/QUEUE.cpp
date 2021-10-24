#include <iostream>
#include <string.h>
using namespace std;
class queue
{
public:
    int size;
    int f;
    int b;
    int arr[10000];
} a;

int isempty(queue &a)
{
    if (a.b == a.f)
    {
        return 1;
    }
    else
        return 0;
}
int isfull(queue &a)
{
    if (a.b == a.size)
    {
        return 1;
    }
    return 0;
}

void enqueue(int value, queue &a)
{
    a.size++;
    a.b++;
    a.arr[a.b] = value;
}
void dequeue(queue &a)
{
    if (!isempty(a))
    {
        int ch;
        a.f++;
        ch = a.arr[a.f];
        for (int i = a.f; i < a.size; i++)
        {
            a.arr[i] = a.arr[i + 1];
        }
        a.b--;
        cout << "THE DEQUEUED QUEUE IS:" << endl;
        for (int i = a.f; i < a.size - 1; i++)
        {
            cout << a.arr[i];
            cout << "\t";
        }
        a.size--;
        cout << endl;
        cout << "THE DEQUED ELEMENT WAS " << ch;
        cout << endl;
        a.f--;
    }
    else if (isempty(a))
        cout << "THE QUEUE IS EMPTY!" << endl;
}

void peeA(queue &a, int ele)
{
    int flag = 0;
    int c = a.f + 1;
    while (c < a.size)
    {
        if (a.arr[c] == ele)
        {
            flag = 1;
            cout << "THE ELEMENT IS FOUND AT" << endl;
            cout << "INDEX: " << c << endl;
            cout << "POSITION: " << c + 1 << endl;
            c++;
        }
        else
        {
            c++;
            continue;
        }
    }
    if (flag == 0)
    {
        cout << "SORRY THE ELEMENT HAS NO OCCURENCES!" << endl;
    }
}

void display()
{
    int i = a.f+1;
    while (i <=a.b)
    {
        cout << a.arr[i] << "\t";
        i++;
    }
}
int main()
{
    char cA;
    int ch, value;
    cin >> a.size;
    a.f = a.b = -1;
    while (a.b < a.size - 1)
    {
        a.b++;
        cin >> a.arr[a.b];
    }

    cout << "THE QUEUE IS: " << endl;
    for (int i = 0; i < a.size; i++)

    {
        cout << a.arr[i] << "\t";
    }
    cout << endl;
    cout << "OK! SO WE HAVE OUR QUEUE. WHAT OPERATIONS YOU WANT TO PREFORM?" << endl;
    do
    {
        cout << "LIST OF OPERATIONS!" << endl;
        cout << "0. ENQUEUE" << endl;
        cout << "1. DEQUEUE" << endl;
        cout << "2. PEEK " << endl;
        cout << "3. DISPLAY" << endl;
        cin >> ch;
        switch (ch)
        {

        case 0:
        {
            cout<<"ENTER THE ELEMENT TO BE ENQUEUED!"<<"\n";
            cin >> value;
            enqueue(value, a);
            break;
        }
        case 1:
            dequeue(a);
            break;
        case 2:
        {
            int ele;
            cout << "WHAT ELEMENT YOU WANT TO PEEK?" << endl;
            cin >> ele;
            peeA(a, ele);
            break;
        }

        case 3:
        {
            display();
            cout<<"\n";
            break;
        }

        }
        cout << "WANT TO OPERATE MORE?" << endl;
        cin >> cA;
    } while (cA == 'Y' || cA == 'y');
    if (cA == 'n' || cA == 'N')
        exit(0);
    cout << "OK! THANKS" << endl;
    return 0;
}