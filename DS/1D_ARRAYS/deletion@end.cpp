#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int *arr, n, i = 0;
    cin >> n;
    arr = new int[n];
    cout << "ENTER THE ARRAY ELEMENTS: " << endl;
    while (i < n - 1)
    {
        cin >> arr[i];
        i++;
    }
    n--;
    i = 0;
    cout << "THE ARRAY AFTER DELETION IS" << endl;
    while (i < n)

    {
        cout << arr[i] << " ";
        i++;
    }
    return 0;
}

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     int arr[1000], n;
//     int i = 0;
//     cin >> n;

//     while (i < n)
//     {
//         cin >> arr[i];
//         i++;
//     }
//     i = 0;
//     cout << "NOW WE WILL BE TRAVERSINGT THE ARRAY AND WE WOULB BE UPDATING THE ELEMENTS!" << endl;

//     while (i < n)
//     {
//         arr[i] *= 2;              // TRAVERSING AND MAKING THE ARRAY ELEMTNTS DOUBLE
//         i++;
//     }
//     i = 0;

//     while (i < n)
//     {
//         cout << arr[i] << " ";

//         i++;
//     }
//     cout << endl;

//     return 0;
// }