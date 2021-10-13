//  SORT AN ARRYA HAVING ONLY 0 1 2
#include <iostream>
#include <string.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
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

    int mid = 0;
    int low = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 1)
        {
            mid++;
        }

        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }

        if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    i = 0;
    while (i < n)
    {
        cout << arr[i]<<" ";
        i++;
    }

    return 0;
}