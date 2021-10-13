#include <iostream>
#include <string.h>
using namespace std;
int arr[1000], brr[1000], *crr;

void acceptarrays(int m, int n)
{
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    i = 0;
    while (i < m)
    {
        cin >> brr[i];
        i++;
    }
}
void mergearr(int arr[], int brr[], int m, int n)
{
    crr = new int[m + n];
    int i = 0;
    int j = 0;

    while (i < n)
    {
        crr[i] = arr[i];
        i++;
    }

    while (j < m)
    {
        crr[i] = brr[j];
        j++;
        i++;
    }
}

void printarr(int m, int n)
{
    cout << "THE MERGED ARRAY IS" << endl;

    int i = 0;

    while (i < m + n)
    {
        cout << crr[i] << " ";
        i++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    acceptarrays(m, n);
    mergearr(arr, brr, m, n);
    printarr(m, n);
    // while (i < n)
    // {
    //     cin >> arr[i];
    //     i++;
    // }
    // i = 0;
    // while (i < m)
    // {
    //     cin >> brr[i];
    //     i++;
    // }

    // int *crr = new int[m + n];
    // i = 0;

    // while (i < n)
    // {
    //     crr[i] = arr[i];
    //     i++;
    // }

    // while (j < m)
    // {
    //     crr[i] = brr[j];
    //     j++;
    //     i++;
    // }

    // cout << "THE MERGED ARRAY IS" << endl;

    // i = 0;

    // while (i < m + n)
    // {
    //     cout << crr[i] << " ";
    //     i++;
    // }

    return 0;
}

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     int n, m,arr[1000],brr[1000];
//     cin >> n >> m;
//     int i = 0;
//     int j = 0;
//     while (i < n)
//     {
//         cin >> arr[i];
//         i++;
//     }
//     i = 0;
//     while (i < m)
//     {
//         cin >> brr[i];
//         i++;
//     }

//     int *crr = new int[m + n];
//     i = 0;

//     while (i < n)
//     {
//         crr[i] = arr[i];
//         i++;
//     }

//     while (j < m)
//     {
//         crr[i] = brr[j];
//         j++;
//         i++;
//     }

//     cout << "THE MERGED ARRAY IS" << endl;

//     i = 0;

//     while (i < m + n)
//     {
//         cout << crr[i] << " ";
//         i++;
//     }

//     return 0;
// }