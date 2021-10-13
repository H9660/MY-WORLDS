#include <iostream> // terminating or non terminating!
#include <string.h>
#include <process.h>
using namespace std;
int check(int d)
{
    int i = 2, flag = 0;
    while (i < d)
    {
        if (d % 2 == 0 || d % 5 == 0)
        {
            i++;
            flag = 1;
            continue;
        }

        else if (d % i == 0 && d % 2 != 0 && d % 5 != 0)
            flag = 0;

        i++;
    }

    if (flag == 1)
        return 1;

    return 0;
}

int main()
{

    int d;
    cin >> d;
    if (d == 0)
    {
        cout << "EXCEPTION: DIVISON BY ZERO" << endl;
        exit(0);
    }

    if (check(d))

        cout << "IT GIVES TERMINATING DECIMAL" << endl;

    else
        cout << "IT GIVES A NON-TERMINATING DECIMAL" << endl;

    return 0;
}