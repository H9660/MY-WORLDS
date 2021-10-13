#include<iostream>
#include<string.h>
#include<map>
#include<string>


using namespace std;


int main()
{
    // declaring the map
map<string, int> M;

M["HUSSAIN"]=99;
M["HASAN"]=100;

// printing the map
map<string, int> ::iterator it= M.begin();
for (int  i = 0; i <M.size(); i++)
{


cout<<( *it).first<<( *it).second;
}

// find funciton

// it= M.find("HUSSAIN");
// cout<<it->second;

// // count the elements
// int i=M.count("HASAN");
// cout<<i;

// we can swap by using swapAnd we need 2 maps for this


// ErasingAn element:

// m.erase(val); //Erases the pair from the map where th


// // FindingAn element:

// map<string,int>::iterator itr=m.find(val); //Gives the iterator to the element val if it is found otherwise returns m.end() .
//  map<string,int>::iterator itr=m.find("Maps"); //I




//  To get the value stored of the Aey "MAPS" we can do m["MAPS"] or we can get the iterator using the find functionAnd then by itr->second we canAccess the value.
return 0;
}