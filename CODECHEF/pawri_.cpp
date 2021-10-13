#include <iostream>
#include<thread>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
    int index;
    string my_str;
    getline(cin, my_str);
    string sub_str = "pawri";
    cout << "Initial String :" << my_str << endl<<endl;
    while ((index = my_str.find("party")) != string::npos)
    {
        my_str.replace(index, sub_str.length(), sub_str);
    }
    cout<<"Generating the pawri string!"<<endl<<endl;
    this_thread::sleep_for(std::chrono::milliseconds(2000));
    cout<<"Final String: " << my_str;
}