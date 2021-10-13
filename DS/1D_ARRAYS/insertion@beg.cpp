#include <iostream>
#include <string.h>
using namespace std;
void addbeg(int *&arr, int ele,int &s)
{
    s++;
    for(int j=s-1;j>0;j--)
    {arr[j]=arr[j-1];
    }
    arr[0]=ele;
}

int main()
{
    int *arr, s, i , ele;
    cin >> s;
    cout << endl;
    arr = new int[s];
    i=0;
    cout << "ENTER THE ARRAY NOW" << endl;
    while (i < s)
    {
        cin >> arr[i];
        i++;
    }
    i = 0;

    cout << "ENTER THE ELEMENT TO BE INSERTED IN THE BEGINNING OF THE ARRAY!" << endl;
    cin >> ele;
    addbeg(arr, ele,s);
    cout << "THE ARRAY AFTER INSERTION IS" << endl;

    while (i < s)
    {
        cout << arr[i]<<" ";
        i++;
    }

    return 0;
}