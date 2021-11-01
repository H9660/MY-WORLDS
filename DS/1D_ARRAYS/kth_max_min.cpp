#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
void kminmax(vector<int> a, int k)
{  
   sort(a.begin(), a.end()); 
   vector<int>::iterator ip;
   ip = std::unique(a.begin(), a.end());
    // Now v becomes {1 3 10 1 3 7 8 * * * * *}
    // * means undefined
  
    // Resizing the vector so as to remove the undefined terms
    a.resize(std::distance(a.begin(), ip));         // ip is pointing to the last element in the unique 
                                                    // vector

    cout<<"The kth maximum and kth minimum elements are respectively "<<a[a.size()-k]<<" and " <<a[k];
}


int main()
{
    vector<int> a(1000);
    int size;
    int k;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> a[i];

    cin>>k;
    kminmax(a,k);

    return 0;
}