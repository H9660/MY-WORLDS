// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     int *arr, n, i = 0;
//     cin>>n;
//     arr = new int[n];
//     cout << "ENTER THE ARRAY ELEMENTS: " << endl;
//     while (i < n)
//     {
//         cin >> arr[i];
//         i++;
//     }
//     i = 1;
//     cout << "THE ARRAY AFTER DELETION IS" << endl;
//     while (i < n)

//     {
//         cout << arr[i] << " ";
//         i++;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#include <chrono>
using namespace std::chrono;
int findmax(int *arr, int n)
{
    int i;
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
    // cout<<max<<" ";
}

int findmin(int *arr, int n)
{
    int i;
    int min = arr[0];
    for (i = 0; i < n; i++)

    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // cout<<min;
    cout << min << " ";
}

int main()
{
    // auto start = high_resolution_clock::now();
    int t, arr[100], i, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        findmin(arr, n);
        findmax(arr, n);
    }

    // auto stop = high_resolution_clock::now();

    // auto duration = duration_cast<microseconds>(stop - start);
    return 0;
}