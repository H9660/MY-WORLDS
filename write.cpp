#include <iostream>
#include <string.h>
using namespace std;
int main(int a)
{
    cout << "a is:" << a << " b is:" << endl;
    a++;

    if (a < 10)
        return main(a);

    return 0;
}