/*

*       * 
* *   * * 
* * * * * 
* *   * * 
*       * 

*/



#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i, j, k;
    int n = 5;
    char arr[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr[i][j] = ' ';
        }
    }

    for (j = 0; j < n / 2; j++)
    {
        for (i = j; i <= n - j - 1; i++)
        {
            arr[i][j] = '*';
        }
    }

    arr[n / 2][n / 2] = '*';

    for (j = n / 2 + 1; j < n; j++)
    {
        for ( i = n - j - 1; i <=j ; i++)
        {
            arr[i][j] = '*';
        }
    }

    // for (i = 0; i < n; i++)
    // {
    //     for ( j = 0; j < n; j++)
    //     {
    //         if ((i - j == -1 || i - j == -2 || i - j == -3) && (i = 0))
    //             arr[i][j] = ' ';
    //         if (i - j == -1 && j == 2)
    //             arr[i][j] = ' ';
    //         if (j - i == -1 && j == 2)
    //             arr[i][j] = ' ';
    //         if ((j == 1 || j == 2 || j == 3) && (j - i == -3 || j - i == -2 || j - i == -1))
    //             arr[i][j] = ' ';
    //     }
    // }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}