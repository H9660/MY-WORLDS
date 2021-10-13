#include<iostream>
using namespace std;
 
/* Function to swap two characters */
void swap(char&A, char& b)
{
    char temp;
    temp =A;
   A = b;
    b = temp;
}
 
/* Function to obtain permutations of string characters */
void permutation(string s,int i,int n)
{
    int j;
    if (i == n)
        cout << s << "\t";
    else
    {
        for (j = i; j < s.length(); j++)
        {
            swap(s[i],s[j]);
            cout<<endl;
            permutation(s, i + 1, n);
            swap(s[i],s[j]);
   
        }  
    }
}
 
int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;
    cout << endl << "The permutations of the given string : " << endl;
    permutation(s, 0, s.length() - 1);

    return 0;
}