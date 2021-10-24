#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;
class stacA
{
public:
    int s;
    int top;
    int *arr;
    void stacApop(stacA &a);
    void stacApush(stacA &a, int b);
    void stacApeeA(stacA &a, int);
    void stacAdelpos(stacA &a, int);
    void stacApushpos(stacA &a, int ele, int p, int);
};

void stacA::stacApush(stacA &a, int b)
{

    a.arr[a.s] = b;
    cout << "THE PUSHED STACK IS :" << endl;
    for (int i = a.s; i > 0; i--)
    {
        cout << a.arr[i] << "\t";
    }
    a.s++;
}
void stacA::stacApop(stacA &a)
{
    cout << endl;

    if (a.s == 0)
    {
        cout << "ALL ELEMENTS ARE POPPED!! NO MORE POPPING POSSIBLE!!" << endl;
        a.s++;
        int ele;
        cin >> ele;
        a.stacApush(a, ele);
    }

    cout << "OK! POPPING THE LAST ELEMENT" << endl;
    a.s--;
    for (int i = a.s - 1; i >= 0; i--)
        cout << a.arr[i] << "\t";

    cout << endl;
    cout << "THE POPPED ELEMENT WAS: "
         << a.arr[a.top];
    cout << endl;

    a.top--;
    cout << "NEW TOP ELEMENT IS: " << a.arr[a.top];
}

void stacA::stacApeeA(stacA &a, int x)
{
    int count = 0;
    if (a.s == 0)
    {
        cout << "STACK IS EMPTY!" << endl;
    }
    cout << endl;
    int flag = 0;
    for (int i = a.s; i > 0; i++)
    {
        if (a.arr[i] == x)
        {
            count++;
            cout << "THE ELEMENT IS FOUND AT INDEX: " << i << endl
                 << "POSITION: " << i + 1;
            cout << endl;
            flag = 1;
        }
    }
    cout << "THE TOTAL OCCURENCES OF " << x << " ARE " << count << "!";
    if (flag == 0)
    {
        cout << "THERE ARE NO OCCURENCES OF THIS ELEMENT!" << endl;
    }
}

void stacA::stacAdelpos(stacA &a, int d)
{
    int j;
    int flag = 0;
    for (int i = 0; i < a.s; i++)
    {

        if (arr[i] == d)
        {
            flag = 1;
            j = i;
            for (int A = j; A < a.s; A++)
            {
                a.arr[A] = a.arr[A + 1];
            }
            a.s--;
        }

        else
            continue;
    }

    if (flag == 0)
        cout << "THERE IS NO SUCH ELEMENT!" << endl;
    cout << "THE STACK AFTER DELETION IS: " << endl;
    for (int i = a.s; i > 0; i--)
    {
        cout << a.arr[i] << "\t";
    }
}

void stacA::stacApushpos(stacA &a, int ele, int p, int copy)
{
    int j;
    int arr[a.s + 1];
    for (int i = p - 1, j = p; i < a.s, j < (a.s + 1); i++, j++)
    {
        arr[j] = a.arr[i];
    }
    arr[p - 1] = ele;

    for (int i = 0; i < p - 1; i++)
    {
        arr[i] = a.arr[i];
    }

    cout << "THE STACK AFTER PUSHING IS: " << endl;
    for (int i = a.s + 1; i > 0; i--)
    {
        cout << arr[i] << "\t";
    }
}

int main()

{
    int c;
    system("cls");
    string op;
    string s;

    stacA a;

    a.top = -1;
    cout << "HOWDY! ENTER THE STACK SIZE!!" << endl;
    cin >> a.s;
    if (a.s == 0)
    {
        cout << "OK THEN! KEEP YOUR EMPTY STACK WITH YOURSELF! STUPID!!" << endl;
        exit(0);
    }
    a.arr = new int[a.s];
    cout << endl;
    cout << "OK! THE SIZE OF THE STACK IS " << a.s << "!" << endl;
    cout << "ENTER THE ELEMENTS OF THE STACK: " << endl;

    for (int i = 0; i < a.s; i++)
    {
        cin >> a.arr[i];
        a.top++;
    }

    cout << "THE STACK IS: " << endl;
    for (int i = a.s - 1; i >= 0; i--)
    {
        cout << a.arr[i] << "\t";
    }
    cout << endl;

    // here is the main funda!!

    do
    {

        cout << "LIST OF OPERATIONS: " << endl;
        cout << "1. PUSH" << endl;
        cout << "2. POP" << endl;
        cout << "3. PEEK" << endl;
        cout << "4. POPPOS" << endl;
        cout << "5. PUSHPOS" << endl;
        cout << endl;
        cout << "MAKE A SELECTION: " << endl;
        cin >> c;

        switch (c)
        {
        case 1:
        {
            int n;
        S2:
            cout << "OK! ENTER THE ELEMENT TO BE PUSHED: " << endl;
            cin >> n;
            a.stacApush(a, n);
        }
        break;
        case 2:
        {
            a.stacApop(a);
        }

        break;
        case 3:
        {
            int x;
            cout << "WHAT ELEMENT YOU WANT TO PEEK: " << endl;
            cin >> x;

            a.stacApeeA(a, x);
        }
        break;
        case 4:
        {
            int d;
            cout << "WHAT ELEMENT YOU WANT TO DELETE: " << endl;
            cin >> d;
            a.stacAdelpos(a, d);
        }
        break;
        case 5:
        {
            int copy = a.arr[a.s - 1];
            int ele, p;
            cout << "ENTER THE ELEMENT YOU WANT TO PUSH" << endl;
            cin >> ele;
            cout << "AT WHAT POSITION YOU WANT TO INSERT? " << endl;
            cin >> p;
            a.stacApushpos(a, ele, p, copy);
        }
        break;

        default:
        {
            cout << "OPERATION NOT DEFINED!" << endl;
            cout << "ABORTING!!!" << endl;
            return -1;
        }
        }
        cout << "\n\n";
        cout << "WANT TO OPERATE MORE?{YES/NO)" << endl;
    S1:
        cin >> op;
    } while (op == "yes" || op == "YES" || op == "y" || op == "Y");

    cout << "\n";

    if (op == "no" || op == "NO" || op == "n" || op == "N")
    {
        cout << "THANKS!!" << endl;
        exit(1);
    }
    else
        cout << "MATE! ENTER THE CORRECT OPERATION!" << endl;
    goto S1;

    return 0;
}
