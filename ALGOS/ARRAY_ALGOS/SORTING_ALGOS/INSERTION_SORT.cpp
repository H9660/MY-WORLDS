#include <iostream>
using namespace std;
int main()               // maximm it takes n*(n-1)/2 swaps;
{ 
    int n;
    int temp;
     int count=0;

    cout << "enter the size and array elements";
    cin >> n;
    int *arr = new int[n];

    for (int k = 0; k < n; k++)
    {
        cin >> arr[k];
    }

    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            count++;
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout << "array after sorting" << endl;
    for (int c = 0; c < n; c++)
    {

        cout << arr[c] << " ";
    }

    cout<<count;
    return 0;
}