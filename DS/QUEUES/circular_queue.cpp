// #include <iostream>
// #include <string.h>
// using namespace std;
// class cqueue
// {
// public:
//     int size;
//     int *arr;
//     int f;
//     int b;
// };

// int isempty(cqueue &a)
// {
//     if (a.b == a.f)
//     {
//         return 1;
//     }
//     else
//         return 0;
// }
// int isfull(cqueue &a)
// {

//     if ((a.b + 1) % a.size + 1 == a.f)
//     {
//         return 1;
//     }
//     else
//         return 0;
// }

// void decqueue(cqueue &a)
// {
//     if (!isempty(a))

//         a.f = (a.f + 1) % a.size;
//     else
//         isempty(a);
// }

// void encqueue(cqueue &a, int val)

// {
//     if (isfull(a))
//         cout << "QUEUE IS FULL" << endl;
//     else
//     {
//         a.b = (a.b + 1) % a.size;
//         a.arr[a.b] = val;
//     }
// }

// void printc(cqueue &a)
// {
//     int i = a.f + 1;
//     cout << "THE CQUEUE IS :" << endl;
//     while (i <= a.b)
//     {
//         cout << a.arr[i] << "\t";
//         i=(i+1)%a.size;
//     }
// }
// int main()
// {
//     int val;
//     cqueue a;
//     cin >> a.size;
//     a.arr = new int[a.size];
//     a.f = a.b = 0;
//     for (size_t i = 0; i < a.size; i++)
//     {

//         cin >> val;
//         encqueue(a, val);
//     }

//     printc(a);
//     return 0;
// }

#include <iostream>
#include <string.h>
using namespace std;
class queue
{
public:
    int size;
    int f;
    int b;
    int *arr;
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
int isfull(queue &A)
{
    if (A.b == A.size - 1)
    {
        return 1;
    }
    return 0;
}
void dequeue(queue &a)
{
    int ch;
    if (!isempty(a))
    {

        ch = a.arr[a.f];
        for (int i = a.f+1; i < a.size; i++)
        {
            a.arr[i] = a.arr[i + 1];
        }
        a.f++;
        a.b--;
        cout << "THE DEQUEUED QUEUE IS:" << endl;
        for (size_t i = a.f; i < a.size - 1; i++)
        {
            cout << a.arr[i];
            cout << "\t";
        }
        a.size--;
        cout << endl;
        cout << "THE DEQUEUED ELEMENT WAS " << ch;
        cout << endl;
    }
    else if (isempty(a))
        cout << "THE QUEUE IS EMPTY!" << endl;
}

void peeA(queue &a, int ele)
{
    int flag = 0;
    int c = a.f;
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
void encqueue(queue &a, int val)

{
    if (isfull(a))
        cout << "QUEUE IS FULL" << endl;
    if (a.b == -1)
    {
        a.f = a.b = 0;
        a.arr[a.b] = val;
    }
    else
    {
        a.b++;
        a.arr[a.b] = val;
    }
}
int main()
{
    char cA;
    int ch;
    int i = 0;
    cin >> a.size;
    a.arr = new int[a.size];
    a.f = a.b = -1;
    while (i < a.size)
    {
        int val;
        cin >> val;
        encqueue(a, val);
        i++;
    }
    i = 0;
    while (i < a.size)
    {
        cout << a.arr[i] << "\t";
        i++;
    }
    cout << endl;
    cout << "OK! SO WE HAVE OUR QUEUE. WHAT OPERATIONS YOU WANT TO PREFORM?" << endl;
    do
    {
        cout << "LIST OF OPERATIONS!" << endl;
        cout << "1. DEQUEUE" << endl;
        cout << "2. PEEK " << endl;
        cin >> ch;
        switch (ch)
        {
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
        }
        cout << "WANT TO OPERATE MORE?" << endl;
        cin >> cA;
    } while (cA == 'Y' || cA == 'y');
    if (cA == 'n' || cA == 'N')
        exit(0);
    cout << "OK! THANKS" << endl;
    return 0;
}