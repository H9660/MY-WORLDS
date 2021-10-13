#include <iostream>
#include <string.h>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void selsort(int arr[], int n)
{
    int i = 0;
    int j = 0;
    int min;
    while (i < n )
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);

        i++;
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

    i = 0;
    selsort(arr, n);

    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
    delete[] arr;
    return 0;
}