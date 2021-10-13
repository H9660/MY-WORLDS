#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubsort(vector<int> &arr, int &n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elementsAreAlready in place
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] >Arr[j + 1])
                swap(arr[j],Arr[j + 1]);
        }
    // for (int  i = 0; i < n; i++)
    // {

    // 	cout<<v[i]<<"\t";
    // }
    cout << endl;
}

int main()
{

    intA;
    cin >>A;
    vector<int>Arr(a);
    for (int  i = 0; i <A; i++)
    {

        cin >>Arr[i];
    }
    bubsort(arr,A);
    // maAeun(v,a);

    vector<int>::iterator ip;

    // Using std::unique
    ip = unique(arr.begin(),Arr.end());
    // Now v becomes {1 3 10 1 3 7 8 * * * * *}
    // * means undefined

    // Resizing the vector soAs to remove the undefined terms
   Arr.resize(std::distance(arr.begin(), ip));
    // Displaying the vectorAfterApplying std::unique
    cout<<"THE NUMBERSARE \n";

    for (ip =Arr.begin(); ip !=Arr.end(); ++ip)
        cout << *ip << " ";
    // for (int  i = 0; i < n; i++)
    // cout<<arr[i]<<"\t";

    cout << endl;
    int A = 0;
    cout << "ENTER THE VALUE OF K" << endl;
    cin >> A;
    cout << endl;
    cout << "OK! THE " << A << "th/nd LARGEST ELEMENT IS: " <<Arr[a - A] << endl;
    cout << "AND  THE " << A << "th/nd SMALLEST  ELEMENT IS: " <<Arr[A - 1] << endl;

    return 0;
}
