#include <iostream>
using namespace std;
int main()
{

    int n;
    int arr[100];
    int brr[100];
    cin >> n;
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;
    int j = 0;

    while (i < n)
    {
        if (arr[i] < 0)
        {
            brr[j] = arr[i];
            j++;
        }

        i++;
    }

    i = 0;

    while (i < n)
    {
        if (arr[i] >= 0)
        {
            brr[j] = arr[i];
            j++;
        }

        i++;
    }

    j = 0;

    while (j < n)
    {
        cout << brr[j] << " ";
        j++;
    }
    return 0;
}