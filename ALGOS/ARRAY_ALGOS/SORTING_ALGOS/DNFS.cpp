#include <iostream>
#include <string.h>
using namespace std;
void swap(int &x, int &y)

{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int mid, low, high;
    int n;
    cin >> n;
    int *arr = new int[n];
    int i = 0;
    while (i < n)
    {

        cin >> arr[i];
        i++;
    }

    low = 0;
    high = n - 1;
    i = 0;
    mid = 0;

    while (mid <= high)
    {

        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
            i++;
            continue;
        }

        if (arr[mid] == 1)
        {
            mid++;
            i++;
            continue;
        }

        if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
            i++;
            continue;
        }
        // i++;   could not use i++ in the end as it was bypassed by the continue statement.
    }

    i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }

    delete[] arr;
    return 0;
}