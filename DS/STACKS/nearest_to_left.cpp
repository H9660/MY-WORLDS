#include <iostream>
#include <string.h>
using namespace std;
int arr[100];
int brr[100];
int top = -1;
int n;
int main()
{
    int n, i = 0, ele;
    cin >> n;
    while (i < n)
    {
        cin >> ele;
        push(ele);
        i++;
    }

    findit();
    return 0;
}

void pop()
{
    if (top == -1)
        cout << "THE STACK IS EMPTY. CAN'T POP" << endl;
    else
        top--;
}

void push(int a)
{
    if (top == n - 1)
        cout << "THE STACK IS FULL. CAN'T PUSH" << endl;
    else
        top++;
    arr[top] = a;
}

void findit()
{
   int min=arr[top];
   int i=top-1;
   int j=top;
   while(i>0)
   {
       if(arr[i]<min)
       {
           brr[j]=arr[i];
           i--;
           j--;
           
           continue;
       }

       else i--;
   }
}