#include <bits/stdc++.h>
using namespace std;
int sliding_sum(int arr[], int n, int d, int m)
{
    int i = 0;
    int sum = 0;
    int count = 0;
    while (i < m)
    {
        sum += arr[i];
        i++;
    }

    if (sum == d)
        count++;

    for (i = m; i < n; i++)
    {
        sum += arr[i] - arr[i - m];
        if (sum == d)
            count++;
    }

    return count;
}

int main()
{
    int n, d, m, i = 0;

    cin >> n;
    int *arr = new int[n];
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    cin >> d >> m;

    int count = sliding_sum(arr, n, d, m);
    cout << count;

    return 0;
}