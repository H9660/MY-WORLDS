#include <iostream>
#include <string.h>
using namespace std;

void twodlsearch(int arr[100][100], int n, int ele)
{
    int i = 0;
    int j = 0;
    int flag = 0;

    i = 0;

    while (i < n)
    {
        while (j < n)
        {
            if (ele == arr[i][j])
            {
                flag = 1;
                cout << "THE ELEMENT IS FOUND AT THE FOLLOWING COORDINATES" << endl;
                cout << "( " << i << " , " << j << ")" << endl;
                j++;
            }

            else
                j++;
        }
        i++;
    }
    
    if (flag == 0)
        cout << "NO OCCURENCES OF THE ENTERED ELEMENT!" << endl;
}

int main()

{
    int n, ele;
    int i = 0, j = 0;
    cin >> n;
    int arr[100][100];
    i = 0;

    while (i < n)
    {
        while (j < n)
        {
            cin >> arr[i][j];
            j++;
        }
        i++;
    }

    cin >> ele;

    twodlsearch(arr, n, ele);

    return 0;
}