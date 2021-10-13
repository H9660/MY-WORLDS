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
    int n;
    cin >> n;
    int *arr = new int[n];
    int i = 0;

    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    for (i = 0; i < n; i++)
    {
        for (int j = 0; i < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        i++;
    }

delete[] arr;
    return 0;
}