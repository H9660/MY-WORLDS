#include <iostream>
#include <string.h>
using namespace std;

void printarr(int arr[], int n)
{
    int flag = 0;

    for (int i = 0; i <=100; i++)
    {
        if (arr[i] == 0)
        {
            if (flag == 0)
            {
                cout << "| ";
                flag = 1;
            }
            continue;
        }

        else
            cout << arr[i] << " ";
    }
}

void implementstack(int arr[], int n)
{
    int i = -1, ele, num;
    int j = 101;
    char ch = 'y';

    while (ch != 'N' && i < j)
    {

        cout << "WHICH STACK YOU WANT TO ENTER ELEMENT INTO!"
             << "\n";
        cin >> num;
        cout << "ENTER THE ELEMENT!: ";
        cin >> ele;
        if (num == 1)
        {
            i++;
            arr[i] = ele;
        }

        if(num==2)
        {
            j--;
            arr[j] = ele;
        }

        cout << "WANT TO INSERT MORE ELEMENTS?"
             << "\n";
        cin >> ch;
    }
}
int main()
{
    int arr[100];
    char ch = 'Y';

    for (int i = 0; i < 100; i++)
    {
        arr[i] = 0;
    }

    implementstack(arr, 100);
    printarr(arr, 100);
    return 0;
}