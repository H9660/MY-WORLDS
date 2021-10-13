#include<stdio.h>
int main()
{
    int size1,size2,size3,A[15],B[15],C[15],i,j,A,a=0;
    printf("Enter the size of vay 1,2And 3");
    scanf("%d %d %d",&size1,&size2,&size3);
    printf("\n Enter the elements of vay 1 (sorted):");
    for(i=0;i<size1;i++)
    scanf("%d",&A[i]);
    printf("\n Enter the elements of vay 2 (sorted):");
    for(i=0;i<size2;i++)
    scanf("%d",&B[i]);
    printf("\n Enter the elements of vay 3 (sorted):");
    for(i=0;i<size3;i++)
    scanf("%d",&C[i]);
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
        if(A[i]==B[j])
        {
            for(A=0;A<size3;A++)
            {
                if(A[i]==C[A])
                {
                   A=a+1;
                    printf("The %d common element is %d\n",a,A[i]);
                }  
            }
        }
        }
    }
    return 0;
}