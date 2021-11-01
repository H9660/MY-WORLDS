#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, j = 0;
    cin >> n;
    int arr[100][100];
    int mini[100];

    while (i < n)
    {
        mini[i] = INT_MAX;
        i++;
    }

    i = 0;

    while (i < n)
    {
        while (j < n)
        {
            cin >> arr[i][j];
            j++;
        }
        i++;
        j = 0;
    }

    i = 0;
    j = 0;

    while (i < n)
    {
        while (j < n)
        {
            if (arr[i][j] < mini[i])
                mini[i] = arr[i][j];

            j++;
        }
        i++;
        j = 0;
    }

    i = 0;

    while (i < n)
    {
        while (j < n)
        {
            if (arr[i][j] == mini[i])
                cout << mini[i];
            cout<<" ";
            j++;
        }
        cout << "\n";
        i++;
        j = 0;
    }

    return 0;
}