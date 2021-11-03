#include <iostream>
#include <string.h>
using namespace std;
class dinosaur
{
public:

    bool isalive()
    {
        return true;
    }
}*dino;

class humans : public dinosaur
{
    public:
    bool isalive()
    {
        return true;
    }
}humn;

int main()
{
   dino=&humn;
   cout<<(*dino).isalive();

    return 0;
}