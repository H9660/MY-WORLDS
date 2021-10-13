#include <iostream>
#include <string.h>
int countdivi(int a)
{
  int i = 1;
  int count = 0;
  while (i <=a)
  {
    if (a % i == 0)
      count++;

    i++;
  }
  return count;
}

using namespace std;
int main()
{
  int a, b;
  int maxi;
  int count = 0;
  int mx = INT_MIN;
  cin >> a >> b;
  int arr[b];
  int i = a, j; // i initialisation is must!
  while (i >= a && i <= b)
  {
    j = 1;
    while (j <=i)
    {
      if (i % j == 0)
        count++;

      j++;
    }

    if (count >= mx)
    {
      maxi = i;
      mx = count;
    }

    i++;
    count = 0;
  }

  cout << "MAXIMUM DIVISOR COUNT IS " << mx << "."<<endl;
  cout << "THE NUMBERS HAVING THE MAXIMUM DIVISORS ARE " << endl;

  i = 1;
  while (i >= a && i <= b)
  {
    if (countdivi(i) == mx)
      cout << i << " ";

    i++;
  }

  return 0;
}