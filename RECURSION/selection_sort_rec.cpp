#include <iostream>      // recursive approach!
#include <string.h>
using namespace std;

void selsort(int arr[], int n)
{
    static int min;
    static int i;
    static int j;

    if (i == n)
        return;

    while (i < n)
    {
        min = i;
        j = i + 1;
        while (j < n)
        {
            if (arr[j] < arr[min])
                min = j;
            j++;
        }
        swap(arr[i], arr[min]);
        i++;
        selsort(arr, n);
    }
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}