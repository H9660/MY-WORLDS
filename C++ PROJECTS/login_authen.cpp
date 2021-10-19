#include <cstdlib>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
// #include "functions.h"
#include<iostream>

using namespace std;

const int SIZE = 100;	// Always use MORE than required
string Usernames[SIZE]; // From the database
string Password[SIZE];	// From the database

int GetNameIndex(string query, int size)
{
	for (int i=0; i<size; i++) //Prevents the program from reading garbage
	{
		if (query == Usernames[i]) return i; //Return the index
	}
	return -1; //Error code
}
bool PasswordMatches(int index, string passwd)
{
	return (passwd == Password[index]);
}



int main(int argc, char** argv) {   
    // initUserCheck(); // Checks to make sure that a user is registered, if not creates a new one.
    
    //Starts the Login Process.
    //Read the database:
        
        const char *appdata = std::getenv ( "APPDATA" );
        std::string path = appdata;
        path += "\\myprogram\\files\\database.dtbf";
        std::ifstream fin ( path.c_str() );
        
	int i=0;

	while (!fin.eof()){
		fin >> Usernames[i] >> Password[i];
		i++; //This represents the number of lines we could extract from the database
	}

        //Begin VISUAL login
        RetryLogin:
	string usrname, passwd;
	printf("Username: ");
	cin >> usrname;

	int index = GetNameIndex(usrname, i); //Send the database size to this function.

	printf("Password: ");
	cin >> passwd;
                        
	if (!PasswordMatches(index, passwd)){ // If Password+Username doesn't match.
	
            printf("Correct Username, incorrect Password.  Please try again.  \n");
            system("PAUSE");
            goto RetryLogin;
	}

    fin.close();
    printf("You have successfully logged in.\n\n");

	return 0;
}

