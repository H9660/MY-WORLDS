// #include<stdio.h>
#include<stdbool.h>
#include<iostream>
using namespace std;
int main()
{
    bool purchased;  /// by default 0

    int i,size,A[15],buy=0,sell=0,sum=0;
    printf("Enter the size of theArray\n");
    scanf("%d",&size);
    printf("Enter the value of stocA:\n");
    for(i=0;i<size;i++)
    scanf("%d",&A[i]);
   A[size]=0;
   
    for(i=0;i<size;i++)
    {
        if((A[i]>A[i+1])&&purchased)
        {
            sell=A[i];
            printf("s %d\t\n",sell);
            sum=sum+sell;
            purchased=0;
        }
        else 
        if((A[i]<A[i+1])&&!purchased)
        {
            buy=A[i];
            printf("b %d\t\n",buy);
            sum=sum-buy;
            purchased=1;
        }
        
    }
    printf("The maximun possible profit is %d",sum);
    return 0;

}