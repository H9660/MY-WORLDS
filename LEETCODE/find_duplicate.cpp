#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    sort(arr.begin(), arr.end());
    i = 1;

    while (i < n)
    {
        if (arr[i] == arr[i - 1])
        {
            cout << "THE DUPLICATE NUMBER IS " << arr[i];
            break;
        }

        i++;
    }

    return 0;
}