#include <iostream>
#include <string.h>
using namespace std;
class dinosaur
{
public:

     bool isalive()                 // if I dont do it virtual then the isalive will not be overridden by the
                                    //  derived class ones
    {  
        return true;
    }

}*dino;

class humans : public dinosaur
{
    public:
    bool isalive()
    {
        cout<<"HUMANS ARE ALIVE!"<<"\n";
        return true;
    }

}humn;

int main()
{
   dino=&humn;
   cout<<(*dino).isalive();

    return 0;
}