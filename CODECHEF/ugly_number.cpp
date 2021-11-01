#include <iostream>
#include <string.h>
using namespace std;

void ifugly(int a)
{
    while (a % 2 == 0)
    {
        a /= 2;
    }

    while (a % 3 == 0)
    {
        a /= 3;
    }

    while (a % 5 == 0)
    {
        a /= 5;
    }

    if (a != 1)
        cout << "False";
    else
        cout << "True";
}

int main()
{
    int a;
    cin >> a;
   ` ifugly(a);

    return 0;
}