// #include <bits/stdc++.h>
// using namespace std;

// int findmis(int arr[], int n, int &res)
// {
//     int flag = 0;
//     int j = 0;
//     while (j < n)
//     {
//         if (abs(arr[j + 1] - arr[j]) >1 && flag == 0)
//         {

//             res = arr[j] + 1;
//             j++;
//             flag = 1;
//         }

//         else
//             j++;
//     }

//     return res;
// }

// int main()
// {

//     int n, t;
//     int i = 0;
//     int res = 0;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         int *arr = new int[n - 1];
//         while (i < n - 1)
//         {
//             cin >> arr[i];
//             i++;
//         }
//         i = 0;

//         res = findmis(arr, n - 1, res);
//         cout << res << endl;
//         delete[] arr;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// int findmis(int arr[], int n, int &res)
// {
//     int flag = 0;
//     int j = 0;
//     while (j < n)
//     {
//         if (abs(arr[j + 1] - arr[j]) > 1 && abs(arr[j + 1] - arr[j])< n && flag == 0)
//         {

//             res = arr[j] + 1;
//             j++;
//             flag = 1;
//         }

//         else
//             j++;
//     }

//     return res;
// }

// int main()
// {

//     int n, t;
//     int i = 0;
//     int res = 0;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         int *arr = new int[n - 1];
//         while (i < n - 1)
//         {
//             cin >> arr[i];
//             i++;
//         }
//         i = 0;

//         res = findmis(arr, n - 1, res);
//         cout << res << endl;
//         delete[] arr;
//     }

#include <bits/stdc++.h>
using namespace std;

// int findmis(int arr[], int n, int &res)
// {
//     int flag = 0;
//     int j = 0;
//     while (j < n)
//     {
//         if (abs(arr[j + 1] - arr[j]) > 1 && abs(arr[j + 1] - arr[j])< n && flag == 0)
//         {

//             res = arr[j] + 1;
//             j++;
//             flag = 1;
//         }

//         else
//             j++;
//     }

//     return res;
// }

int main()
    // {

    //     int n, t;
    //     int i = 0;
    //     int res = 0;
    //     cin >> t;
    //     while (t--)
    //     {
    //         cin >> n;
    //         int *arr = new int[n - 1];
    //         while (i < n - 1)
    //         {
    //             cin >> arr[i];
    //             i++;
    //         }
    //         i = 0;

    //         res = findmis(arr, n - 1, res);
    //         cout << res << endl;
    //         delete[] arr;
    //     }

    int t, n, i;
int sum = 0;
cin >> t;
while (t--)
{
    cin >> n;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    i = 0;

    for (i = 0; i < n; i++;)
    {
        sum += arr[i];
    }
    cout << (n * (n + 1)) / 2 - sum << endl;
}
return 0;
}