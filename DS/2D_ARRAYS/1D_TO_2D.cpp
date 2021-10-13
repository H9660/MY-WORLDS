#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int ct = 0;
    int j = 0;
    int i = 0;
    int n = 5;
    int arr[5];
    int brr[5][5];
    // cin >> n;
    // int *arr = new int[n];
    // int **brr = new int *[n];
    // while (j < n)
    // {
    //     brr[j] = new int[n];
    //     j++;
    // }

    while (i < n)
    {
        while (j < n)
        {
            brr[i][j] = 0;
            j++;
        }
        i++;
    }

    i = 0;

    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;

    for (i = 0; i < n; i++)
    {

        if (ct % 2 == 0)
        {
            j = 0;
            while (j < n)
            {
                brr[i][j] = arr[j];
                j++;
            }
        }

        else if (ct % 2 != 0)
        {
            j = 0;
            while (j < n)
            {
                brr[i][j] = arr[n - j - 1];
                j++;
            }
        }

        ct++;
        i++;
    }

    i = 0;
    j = 0;

    while (i < n)
    {
        while (j < n)
        {
            cout << brr[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // delete[] arr;
    // i = 0;
    // while (i < n)
    // {
    //     delete[] brr[i];
    // }
    // delete brr;

    return 0;
}