#include <iostream>
#include <string.h>
using namespace std;
int count=0;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void bubsort(int arr[], int n)         // bubsort takes at most n(n-1)/2 swaps
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
                count++;
            }
        }
    }
}
int main()
{

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }

cout<<"TOTAL NUMBER OF SWAPS ARE "<<count;
    return 0;
}

// 1 2 3 4 6 5 