#include <iostream>
#include <string.h>
using namespace std;
void addend(int *&arr, int ele,int &s)
{
    s++;
  arr[s-1]=ele;
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

    cout << "ENTER THE ELEMENT TO BE INSERTED IN THE END OF THE ARRAY!" << endl;
    cin >> ele;
    addend(arr, ele,s);
    cout << "THE ARRAY AFTER INSERTION IS" << endl;

    while (i < s)
    {
        cout << arr[i]<<" ";
        i++;
    }

    return 0;
}