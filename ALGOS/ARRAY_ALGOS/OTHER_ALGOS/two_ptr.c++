#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    int i = 0;
    int x;
    int fi, fj;
    int flag = 0;
    cin >> n >> x;
    int j = n - 1;
    int *arr = new int[n];

    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;

    cout << "THE PAIRS FOUND ARE AS FOLLOWS: " << endl;

    while (i <= j)
    {
        if (arr[i] + arr[j] == x)
        {
            fi = i;
            fj = j;
            flag = 1;
            cout << "->"
                 << "( " << fi << " , " << fj << " )" << endl;
        }

        if (arr[i] + arr[j] > x)
        {
            j--;
        }

        else
            i++;
    }

    cout << "PRESS ENTER TO CONTINUE" << endl;
    return 0;
}