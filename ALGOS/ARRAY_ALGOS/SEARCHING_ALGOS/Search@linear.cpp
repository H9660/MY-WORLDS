#include <iostream>
#include <string.h>
using namespace std;

void search_linear(int arr[100], int n, int ele = 0)
{
    cout << "ENTER THE ELEMENT TO BE SEARCHED FOR: " << endl;
    cin >> ele;
    int i = 0;
    int occ = 1;
    int flag = 0;
    cout << "THE LINEAR SEARCH IS SUCCESSFUL!" << endl;
    while (i < n)
    {

        if (arr[i] == ele)
        {
            if (occ == 1)
                cout << occ << "st "
                     << "OCCURENCE OF ELEMENT IS AT\n"
                     << "INDEX: " << i << endl
                     << "POSTION: " << i + 1 << endl;
            flag = 1;

            if (occ == 2)
            {
                cout << occ << "nd "
                     << "OCCURENCE OF ELEMENT IS AT\n"
                     << "INDEX: " << i << endl
                     << "POSTION: " << i + 1 << endl;
            }
            if (occ == 3)
            {
                cout << occ << "rd "
                     << "OCCURENCE OF ELEMENT IS AT\n"
                     << "INDEX: " << i << endl
                     << "POSTION: " << i + 1 << endl;
            }

            if (occ > 3)
            {
                cout << occ << "th "
                     << "OCCURENCE OF ELEMENT IS AT\n"
                     << "INDEX: " << i << endl
                     << "POSTION: " << i + 1 << endl;
            }

            occ++;
        }

        i++;
    }
    if (flag == 0)
    {
        cout << "NO OCCURENCES OF THE ELEMENT FOUND ! SORRY" << endl;
    }
}

int main()
{
    int i = 0;
    int arr[100];
    int n;
    cin >> n;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    search_linear(arr, n);
    return 0;
}