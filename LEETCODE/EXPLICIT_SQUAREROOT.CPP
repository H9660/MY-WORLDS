#include <iostream>
#include <string.h>
using namespace std;
long long int sqroot(long long int a)
{
    long long int i = 1;
    if (a == 1 || a == 3)
    {
        return 1;
    }
    if(a==0)
    return 0;

    while (i <= a / 2)
    {
        if (a / i == i)
        {
            return i;
            break;
        }

        if (a / i == i + 1)
        {
            return i;
            break;
        }

        if (a / i == i - 1)
        {
            return i - 1;
            break;
        }
        i++;
    }
    return -1;
}

int main()
{
    long long int a;
    cin >> a;
    cout << mySqrt(a);
    return 0;
}

/*************************************************OPTIMISED CODE*************************/
#include <iostream>                  /*uses the greater than approach*/
#include <string.h>
using namespace std;
int mySqrt(int x)
{
    if (x == 0)
        return 0;
    for (long i = 0; i <= x; i++)
    {
        if (i * i > x)
            return i - 1;
    }
    return 1;
}
int main()
{
    long long int a;
    cin >> a;
    cout << mySqrt(a);
    return 0;
}

// **********************************OPTIMISED CODE***************************************   
#include <iostream>                /*uses binary search*/
#include <string.h>
using namespace std;
int mySqrt(int x) //x=8
    {
        int left=1,right=x/2,ans; //l=1 r=4
        while(left<=right) // 1<4
        {
            int mid=(left+(right-left)/2);   //mid=2
            long temp=(long)mid*(long)mid; //temp=4
            if(temp==x) 
                return mid;
            if(temp<x)
                ans=mid,left=mid+1; //ans=4 
            else
                right=mid-1; //right=1
            
            
        }
        return ans;
        
        
    }

    int main()
{
    long long int a;
    cin >> a;
    cout << mySqrt(a);
    return 0;
}