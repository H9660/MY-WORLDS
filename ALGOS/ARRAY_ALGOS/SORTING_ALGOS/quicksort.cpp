#include <iostream>
#include <string.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int parting(int low, int high, int arr[])
{
    int i = low - 1;
    int j = low;
    int pivot = arr[high];
    while (j <= high-1)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);

        }

        j++;
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void sorting(int low, int high, int arr[])
{
    if (low < high)
    {
        int pt = parting(low, high, arr);
        sorting(low, pt - 1, arr);
        sorting(pt + 1, high, arr);
    }
}

void print(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
}
int main()
{

    // int arr[10] = {1, 5, 2, 7, 3, 9, 4, 10, 6, 8};
    int n, i = 0;
    cin >> n;

    int *arr = new int[n];
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    sorting(0, n-1, arr);
    print(arr, n);

    delete[] arr;
    return 0;
}