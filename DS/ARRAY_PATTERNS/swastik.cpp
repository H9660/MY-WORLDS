/*
*   * * * 
*   *     
* * * * * 
    *   * 
* * *   * 
*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i, j, k;
    long long n=100;                       // PATTERN IS BEST WHEN THE VALUES OF N ARE ODD
    char arr[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr[i][j] = ' ';
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == n / 2 || j == n / 2)
                arr[i][j] = '*';

            // if(((i==0&&i<n/2)&&j=0||(i==n/2||i<=n-1)&&j==n-1)||((i==0&&j>n/2)||(i==n/2||i==n-1)&&j<=n/2)))

            // if(((i>=0&&i<=n/2)&&j==0)||((i>=n/2&&i<=n-1)&&j==n-1)||(i==0||(j>=n/2&&j<=n-1))||(i==n-1||(j>=0&&j<=n/2)))
            for (k = 0; k <= n / 2; k++)
            {
                arr[k][0] = '*';
                arr[n - k][n - 1] = '*';
            }

            for (k = 0; k <= n / 2; k++)
            {
                arr[n - 1][k] = '*';
                arr[0][n - k] = '*';
            }

            // if((i==0|| i==n-1)||(j==0||j==n-1))
            // arr[i][j]='*';                                    // for cornors as well
        }
    }

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