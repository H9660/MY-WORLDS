// #include <iostream>
// #include <string.h>
// using namespace std;

// /*Complete the function below*/
// int PalinArray(int a[], int n)
// {
//     int count = 1;

//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         int reverse = a[i];
//         int number = a[i];
//         while (reverse > 0)
//         {
//             int num = reverse % 10;
//             sum = sum * 10 + num;
//             reverse = reverse / 10;
//         }
//         if (number != sum)
//         {
//             count = 0;
//             break;
//         }
//         else
//             count = 1;
//     }
//     return count;
// }

// int main()
// {
//     int arr[100];
//     int n;
//     cin >> n;
//     int i = 0;
//     while (i < n)
//     {
//         cin >> arr[i];
//         i++;
//     }

//     int x = PalinArray(arr, n);
//     if (x == 1)
//         cout << "THE ARRAY IS PALINDROMIC" << endl;
//     else
//         cout << "THE ARRAY IS NOT PALINDROMIC" << endl;
//     return 0;
// }

#include <stdio.h>
static int total = 0;

void getmarks()
{
    int marks;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks);
        total = total + marks;
    }
}
void printresult()
{
    int per = total / 5;
    printf("the percentage of student is %d\n", per);
    if (per >= 60)
        printf("student got frist division\n");
    else if (per > 50 && per < 59)
        printf("student got second division\n");
    else if (per > 40 && per < 49)
        printf("student  got third division\n");
    else if (per < 40)
        printf("student got failed\n");
}

void main()
{
    printf("enter marks of student\n");
    getmarks();
    printresult();
}
