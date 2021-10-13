/*

*       * 
  *   *   
    *     
  *   *   
*       * 
*/


#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i, j, k;
    int n=5;
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
            if(i==j||i+j==n-1)
            arr[i][j]='*';
            
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