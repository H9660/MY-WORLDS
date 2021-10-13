#include <iostream>

#include <string.h>

using namespace std;



static int count = 0;

int main()

{

    long  n, i = 0, ele;

    int mid, beg, end, index = 0, flag = 0, ch;

    cin >> n;

   

    int *arr = new int[n];



    while (i < n)

    {

        cin >> arr[i];

        i++;

    }



    beg = 0;

    end = n - 1;

    cin >> ele;



    while (beg <= end)

    {



        mid = (beg + end) / 2;

        if (ele == arr[mid])

        {

            index = mid;

            flag = 1;

            break;

        }



        if (ele > arr[mid])

        {

            beg = mid + 1;

            count++;

        }



        if (ele < arr[mid])

        {

            end = mid - 1;

            count++;

        }

    }



    if (flag == 1)



    {

        cout << "THE ELEMENT IS FOUND AT INDEX " << index << " AND POSTION " << index + 1 << endl;

        cout<<"IT TOOK "<<count+1<<" SEARCH(ES)"<<endl; // SUCCESSFUL SEARCH!

    }



    else



        cout << "THE ELEMENT COULD NOT BE FOUND!" << endl; // UNSUCCESSFUL SEARCH



    return 0;

}