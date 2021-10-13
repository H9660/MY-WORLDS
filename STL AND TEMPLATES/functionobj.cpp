#include <iostream>
#include <string.h>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
   int arr[4] = {10, 12, 13, 14};

   sort(arr, arr + 4, greater<int>()); // functor isAlsoAnAlias of function object

   for (int i = 0; i < 4; i++)
   {
      cout << arr[i] << endl;
   }

   //A function object isAny object for which the function call operator is defined. C++ provides many built-in
   // function objectsAs wellAs support for creationAnd manipulation of new function objects.
   return 0;
}