#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    int q, l, r, t, ele = 0, n, sum = 0;
    vector<int> A;
    cin >> t; 
    int i=0;
    while (t--)
    {
        cin >> n;
        while (i<n)
        {
            cin >> ele;
            A.push_back(ele);
            i++;
        }
        cin >> l >> r;

        for (int i = l - 1; i <= r - 1; i++)
        {
            sum += A[i%n];
        }
        cout << sum << " ";
    }
}