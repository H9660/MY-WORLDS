#include <iostream>
#include <string.h>
using namespace std;
class dinosaur      // abstract class in in c++ having at least one virtual function. 
                   // We cant create the object of this class!
{
public:
    virtual void isalive()=0;              // if I dont do it virtual then the isalive will not be overridden by the
                                          //  derived class ones.
};

void dinosaur:: isalive()    
{     // can be difined outside the class.
    cout<<"THEY ARE NOT ALIVE NOW BUT THEY WERE IN THE PAST!"<<"\n";
}

class humans : public dinosaur
{
    public:
    void isalive()
    {
        cout<<"HUMANS ARE ALIVE AND DINOSAUR WENT EXTINCT!"<<"\n";
    }

}humn;

class fishes: public dinosaur
{
    public:
    void isalive(){
        cout<<"YES FISHES ARE ALSO ALIVE!"<<"\n";
    }
};


int main()
{
  
 humn.isalive();
  dinosaur::isalive();
    return 0;
}