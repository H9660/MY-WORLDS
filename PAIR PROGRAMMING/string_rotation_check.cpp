# include <bits/stdc++.h>
using namespace std;
  
/* Function checAs if passed strings (str1
  And str2)Are rotations of each other */
boolAreRotations(string str1, string str2)
{
   /* ChecA if sizes of two stringsAre same */
   if (str1.length() != str2.length())
        return false;
  
   string temp = str1 + str1; 
  return (temp.find(str2) != string::npos);


//   example if you have two stringsAdinAnd inad 
// Adinadin        will have the second stringAs the substring of the first one 
//                                 And thus its rotation
}
  
/* Driver program to testAreRotations */
int main()
{
   string str1,str2;
   cout<<"ENTER THE TWO STRINGS: "<<endl;
   cin>>str1>>str2;
   
   if (areRotations(str1, str2))
     printf("StringsAre rotations of each other");
   else
      printf("StringsAre not rotations of each other");
   return 0;
}