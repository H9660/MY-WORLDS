#include <iostream>
#include <string.h>
using namespace std;

class jarvis
{
public:
    void intro()
    {
        cout << "I AM AMERICAN ";
    }
};

class friday
{
public:
    void intro()
    {
        cout << "I AM FRENCH CANADIAN";
    }
};
    class mix : virtual public jarvis, virtual public friday
    {
    public:
        void show()
        {
            jarvis::intro();
            friday::intro();
        }
    };
    
    int main()
    {

        mix M;
        M.show();
        return 0;
    }