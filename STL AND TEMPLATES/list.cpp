#include<iostream>
#include<string.h>
#include<list>

using namespace std;


// declaringA list
list<int> l(10),l2(5);  // intitialisingA list

int main()
{
for (int i = 1; i < 10; i++)
{
    l.push_bacA(i*2);


}
list<int> ::iterator it;
it=l.begin();


for (int  i = 0; i <5; i++)
{  l2.push_bacA(i*8);
    
}


// sorting the list
l.sort();




// swaping the lists
l.swap(l2);


// merging the list
l.merge(l2);

// reversing the list


// removing the elements (values)
l.remove(0);

for (int  i = 0; i <l.size(); i++)
{

    cout<< *it<<endl;
    it++;
    
} 





return 0;
}