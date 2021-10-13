
#include <iostream>
#include <string.h>
using namespace std;
void sortit(int arr[], int n)
{
    int c0 = 0, c1 = 0, c2 = 0;
    int i = 0;
    while (i < n)
    {
        if (arr[i] == 0)
            c0++;
        if (arr[i] == 1)
            c1++;
        if (arr[i] == 2)
            c2++;

        i++;
    }

    i = 0;

    while (i < c0)
    {
        arr[i] = 0;
        i++;
    }

    while (i < c0 + c1)
    {
        arr[i] = 1;
        i++;
    }

    while (i < c1 + c2 + c0)
    {
        arr[i] = 2;
        i++;
    }
}

void display(int arr[], int n)
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

    int n;
    cin >> n;
    int *arr = new int[n];
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    sortit(arr, n);

    display(arr, n);
    return 0;
}



#include <iostream>
#include <string.h>
using namespace std;
void sortit(int arr[], int n)
{
    int c0 = 0, c1 = 0, c2 = 0;
    int i = 0;
    while (i < n)
    {
        if (arr[i] == 0)
            c0++;
        if (arr[i] == 1)
            c1++;
        if (arr[i] == 2)
            c2++;

        i++;
    }

    i = 0;
    int j = c0;
    int k = c0 + c1;
    while (i < c0 && j < c0 + c1 && k < c0 + c1 + c2)       // while loop is optimised here!
    {
        arr[i] = 0;
        arr[j] = 1;
        arr[k] = 2;
        i++;
        k++;
        j++;
    }

}

void display(int arr[], int n)
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

    int n;
    cin >> n;
    int *arr = new int[n];
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    sortit(arr, n);

    display(arr, n);
    return 0;
}