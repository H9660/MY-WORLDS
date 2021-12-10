#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    int a = 1;

S1:
    if (a <= 1000000)
    {
        cout << a << " ";
        a++;
        goto S1;
    }


    return 0;
    
}