#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
static int ct = 0;
const int n = pow(10, 6);
class stacA
{
public:
    int s;
    int top;
    void stacApop(stacA &a);
    void stacApush(stacA &a, int c);
    string arr;
};

int isempty(stacA &a)
{

    if (a.top == -1)
    {
        return 1;
    }
    else
        return 0;
}

int isfull(stacA &a, int top)
{
    if (top == sizeof(a.arr) - 1)

    {
        return 1;
    }
    else
        return 0;
}
void stacA::stacApush(stacA &a, int b)

{
    if (isfull(a, a.top))
        cout << "STACK IS FULL! NO MORE PUSHING NOW" << endl;
    a.arr[sizeof(arr) - 1] = b;

    a.s++;
    a.top++;
}

void stacA::stacApop(stacA &a)
{
    if (sizeof(arr) == 0)
    {
        cout << "ALL ELEMENTS ARE POPPED!! NO MORE POPPING POSSIBLE!!" << endl;

        a.s++;
    }
    else
        a.s--;

    a.top--;
}

int main()
{
    stacA a;
    system("cls");

    // cin >> a.s;
    int i = 0;
    getline(cin, a.arr);

    a.top = -1;
    for (int i = 0; i < sizeof(a.arr); i++)
    {
        if (a.arr[i] == ')')
        {
            a.stacApop(a);
            ct--;
        }

        if (a.arr[i] == '(')
        {
            a.stacApush(a, '(');
            ct++;
        }
    }
    cout << endl;
    cout << "THE STRING IS " << a.arr.length() << " CHARATCERS LONG" << endl;
    if (isempty(a))
        cout << "PARENTHESIS ARE MATCHED!" << endl;
    else
    {
        cout << "PARENTHESIS ARE NOT MATCHED!" << endl;
        if (ct < 0)
            cout << "YOU ARE FALLING SHORT OF " << abs(ct) << " '(' PARENTHESIS" << endl;
        else
            cout << "YOU ARE FALLING SHORT OF " << ct << " ')' PARENTHESIS" << endl;
    }
    return 0;
}
