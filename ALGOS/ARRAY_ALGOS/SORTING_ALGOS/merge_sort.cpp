#include <iostream>

#include <string.h>

using namespace std;

void mergit(int arr[], int l, int mid, int r)

{

    int n1 = mid - l + 1;

    int n2 = r - mid;

    int a[n1];

    int b[n2];

    for (int i = 0; i < n1; i++)

    {

        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)

    {

        b[i] = arr[mid + i + 1];
    }

    int i = 0;

    int j = 0;

    int k = l;

    while (i < n1 && j < n2)

    {

        if (a[i] < b[j])

        {

            arr[k] = a[i];

            i++;

            k++;
        }

        else

        {

            arr[k] = b[j];

            j++;

            k++;
        }
    }

    while (i < n1)

    {

        arr[k] = a[i];

        i++;

        k++;
    }

    while (j < n2)

    {

        arr[k] = b[j];

        j++;

        k++;
    }
}

void divc(int arr[], int l, int r)

{

    if (l < r)

    {

        int mid = (l + r) / 2;

        divc(arr, l, mid);

        divc(arr, mid + 1, r);

        mergit(arr, l, mid, r);
    }
}

int main()

{

    int arr[100];

    int n;

    cin >> n;

    int i = 0;

    while (i < n)

    {

        cin >> arr[i];

        i++;
    }

    int l = 0;

    int r = n - 1;

    divc(arr, l, r);

    i = 0;

    while (i < n)

    {

        cout << arr[i] << " ";

        i++;
    }

    return 0;
}