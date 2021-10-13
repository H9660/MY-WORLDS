#include <iostream>
#include <fstream>
using namespace std;

int main()
{   system("cls");
	ifstream fs("original.txt");	
	ofstream ft("DESTINATION.txt");
	string str;

	if (fs && ft)
	{
		while (getline(fs, str))
		{
			ft << str << "\n";
		}

		cout << "\n\n Source File Date Successfully Copied to Destination File...!!!";
		cout << endl;
		cout << endl;
	}
	else
	{
		cout << "File Cannot Open...!!!";
	}

	ifstream s("DESTINATION.txt");
	while (!s.eof())
		s >> str;
	cout << "THE CONTENTS OF THE DESTINATION FILE ARE:" << endl;
	cout << str;

	fs.close();
	ft.close();
	s.close();
}