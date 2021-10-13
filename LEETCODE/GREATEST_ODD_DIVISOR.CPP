#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    int max = 1;
    cin >> n;

    int i = 1;
    while (i < n)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            if (max < i)
                max = i;
               
        }

        i++;
    }

    cout << max << endl;
    return 0;
}