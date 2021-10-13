#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int m, n, i = 0, j = 0;
    cin >> m >> n;
    
    int **arr = new int *[n];
    while (i < m)
    {
        arr[i] = new int[m];
        i++;
    }

    i = 0;

    while (i < n)
    {
        while (j < m)
        {
            cin >> arr[i][j];
            j++;
        }

        i++;
        j = 0;
    }

    i = 1;
    j = 0;
    
    while (i < n)
    {
        while (j < m)
        {
            if(arr[0][j]==arr[i][j])
            
        }
    }

    return 0;
}