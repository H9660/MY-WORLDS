#include <iostream>
#include <string.h>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void wavesort(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        if (arr[i] > arr[i + 1] && i <= n - 2)
            swap(arr[i], arr[i + 1]);

        if (arr[i] > arr[i - 1])
            swap(arr[i], arr[i - 1]);

        i += 2;
    }
}

int main()
{
    int n, i = 0;
    cin >> n;
    int *arr = new int[n];
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    wavesort(arr, n);

    i = 0;

    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }

    delete[] arr;
    return 0;
}