
// INVERSIONS: HAVING A HIGHER ELEMENT AT A SAMLLER INDEX . LIKE  IN  3,1,5,2,4  3 IS BEFORE
// 1 AND IS BIGGER THAN 1 SO (3,1) IS AN INVERSION!


// BRUTE FORCE APPROACH!

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    int i = 0;
    int *arr = new int[n];
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;
    int j = 0;

    while (i < n)
    {
        j = i + 1;
        while (j < n)
        {
            if (arr[i] > arr[j])
                count++;
                
                
            j++;
        }
        i++;
    }

    cout << count;
    return 0;
}