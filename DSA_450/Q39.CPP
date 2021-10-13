#include <iostream>
#include <string.h>
using namespace std;
int ispal(int n)
{
    string x = to_string(n);
    int i = 0;
    int flag = 0;
    while (i < x.length() / 2)
    {
        if (x[i] == x[x.length() - i - 1])
            flag++;

        i++;
    }

    if (flag == x.length() / 2)
        return 1;
    return 0;
}
/*Complete the function below*/
int PalinArray(int a[], int n)
{
    int i = 0;
    int flag = 0;
    while (i < n)
    {
        if (ispal(a[i]))
            flag++;

        i++;
    }

    if (flag == n)
        return 1;
    return 0;
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

    int x = PalinArray(arr, n);
    if (x == 1)
        cout << "THE ARRAY IS PALINDROMIC" << endl;
    else
        cout << "THE ARRAY IS NOT PALINDROMIC" << endl;
    return 0;
}


