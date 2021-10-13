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
    int min;
    int key;
    cin >> n;
    int *arr = new int[n];

    int i = 0;
    int j;

    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;

    while (i < n)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min]) //  { 2.5.4.1.3}
                min = j;
        }

        swap(arr[i], arr[min]);

        i++;
    }

    i = 0;

    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }

    return 0;
}