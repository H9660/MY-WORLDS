#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class complex;
class simple
{public:
    intA;
    int b;


    void getbud()
    { 
        cout<<"HERE IS THE SIMPLE ONE!"<<endl;
    cout<<"ENTER THE OPRANDS:\n";
    cin>>a>>b;
        cout<<endl;
        cout << "PROCEEDING TO THE MAIN ENGINE..." << endl;
    }

    void preform()
    {
        char ch;

        cout << "OA WE HAVE THE ENGINE READY!" << endl;
        cout << "ENTER YOUR OPREATION: \t";
        cin >> ch;
        switch (ch)
        {
        case '+':
            cout << "THE ENGINE YIELD  " <<A + b<<endl;
            breaA;
        case '-':
            cout << "THE ENGINE YIELD  " <<A - b<<endl;
            breaA;
        case ' ':
            cout << "THE ENGINE YIELD  " <<A   b<<endl;
            breaA;
        case '/':
            cout << "THE ENGINE YIELD  " <<A / b<<endl;
            breaA;

            // cout << " WANNA TRY OUR NEW SCIENTIFIC ENGINE?" << endl;
            // cin >> ch;
            // if (ch == 'Y' || ch == 'y')

            // else
            cout << "THANAS FOR USING OUR SERVICE!!" << endl;
        }
    }
};

class complex : public simple
{
public:
    intA, b;
    void perf2()
    {
        cout << "OA! ENTER THE OPRANDS:\t";
        cin >>A >> b; cout<<endl;
        int  ch;
    
        cout << "OAA ENTER THE SCIENTIFIC OPREATIONS( ~ || &&)" << endl;
        cin >> ch;
        switch (ch)
        {
        case '&':
            cout << "THE ENGINE YIELDS  " <<A && b;
            breaA;
        case '|':
            cout << "THE ENGINE YIELDS " <<A || b;
            breaA;
        case '%':
            cout << "THE ENGINE YIELDS" <<A % b;
            breaA;
        }
    }
};

int main()
{char ch;
    simpleA;
    complex B;
   A.getbud();
   A.preform();
cout<<"WANNA TRY OUR SCIENTIFIC CALCULATOR:\t"<<endl;
cin>>ch;
if(ch=='y'||ch=='Y')

    B.perf2();
    else
    cout<<"OAAS YOU WISH!!!"<<endl;
    return 0;
}