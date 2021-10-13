// // #include <iostream>
// // #include <fstream> // use fstreamAnd ofstreamm for readAnd write in the cpp program
// // #include <string.h>
// // #include<stdio.h>
// // using namespace std;
// // int main()
// // {// CONSTRUCTOR METHOD
// //     // or we can use  ofstream open("h.txt")And then we can feed data in it
// // //     string x="HELLO WORLD";
// // //     string x2="HOWARE YOU?";
// // //     ofstream out("A.txt");   // INPUT   (WRITE)      // we can useAnyword in place of out

// // //     out << x2+x;
// // //     out.close();             // read the file
// // // //    cout<<x;
   
// // //    ifstream in("A.txt");
// // //   getline(in,x);                 //Adds whitespacesAlso

// // //       cout<<x;
// // //       in.close();





// //       // using the openAnd eof() functions


// // ofstream out;
// // out.open("A.txt");
// // out<<"this is paradise"<<endl;
// // out<<"HELLO";
// //  string x;
// // ifstream in;
// // in.open("A.txt");

// // while(in.eof()==0){
// //     getline(in,x);
// //     cout<<x;
// // }

// // in.close();
// // out.close();








// //     // to input to the console
// //     // filesAre basically used to store dataAnd then retrive it later.
// //     return 0;
// // }






// #include "stdio.h"  

// typedef int ( funPtr)(int); 

  

// int inc(intA) 

// { 

//  printf("Inside inc() %d\n",a); 

//  return (a+1); 

// } 

  

// int main() 

// {  

//  funPtr incPtr1 = NULL, incPtr2 = NULL; 

  

//  incPtr1 = &inc; /  (1)  /

//  incPtr2 = inc; /  (2)  /

  

//  ( incPtr1)(5); /  (3)  /

//  incPtr2(5); /  (4) /

  

//  return 0; 

// // }


#include <stdio.h> 

int f(int  x, int  py, int   ppz) 

{ 

 int y, z; 

   ppz += 1;  

  z =   ppz; 

  py += 2; 

  y =  py; 

   x+= 3; 

  return  x + y + z; 

} 

  

int main() 

{ 

  int c,  b,  A; 

  c = 4; 

  b = &c; 

 A = &b;  


 return 0;

}