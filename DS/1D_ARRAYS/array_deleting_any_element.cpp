#include <iostream>
#include <string.h>
using namespace std;

int binsearch(int arr[], int n, int ele)
{
    int flag = 0;
    int beg = 0;
    int mid;
    int end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (ele == arr[mid])
        {
            return mid;
            flag = 1;
        }

        if (ele > arr[mid])
            beg = mid + 1;

        else
            end = mid - 1;
    }
    return -1;
}

void delelement(int arr[], int n, int ele)
{

    int pos = binsearch(arr, n, ele);
    int j = pos;

    while (j < n)
    {
        arr[j] = arr[j + 1];
        j++;
    }

    j = 0;
    while (j < n - 1)
    {
        cout << arr[j] << " ";
        j++;
    }
}

int main()
{
    int n, i = 0;
    int ele;
    cin >> n;
    int *arr = new int[n];
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    cout << "ENTER THE ELEMENT!" << endl;
    cin >> ele;
    int pos = binsearch(arr, n, ele);
    if (pos == -1)
    {
        cout << "ELEMENT NOT FOUND" << endl;
        return 0;
    }
    else
        cout << "NOW THE ELEMENT WILL BE DELETED!" << endl;

    delelement(arr, n, ele);

    cout << endl;

    cout << "NOW AN ELEMENT WILL BE INSERTED AT THE POSITION OF THE FOUND ELEMENT!" << endl;
    cout << "ENTER THE ELEMENT TO BE INSERTED:  ";
    cin >> ele;
    
    for (int j = n - 1; j > pos; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[pos] = ele;

    cout << "THE ARRAY AFTER INSERTING THE ELEMENT IS:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}