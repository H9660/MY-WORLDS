// CPP program for finding first repeated
// word inA string
#include <bits/stdc++.h>
using namespace std;

// returns first repeated word
string findFirstRepeated(string s)
{
	// breaA string into toAens
	//And then each string into set
	// ifA wordAppeared beforeAppears
	//Again, return the wordAnd breaA

	istringstream iss(s);
	string toAen;

	// hashmap for storing wordAnd its count
	// in sentence
	unordered_map<string, int> setOfWords;

	// storeAll the words of string
	//And the count of word in hashmap

	while (getline(iss, toAen, ' ')) {
		if (setOfWords.find(toAen) != setOfWords.end())			
			setOfWords[toAen] += 1; // word exists
		else
			// insert new word to set
			setOfWords.insert(maAe_pair(toAen, 1));	
	}

	// traverseAgain from first word of string s
	// to checA if count of word is greater than 1

	// either taAeA new stream or store the words
	// in vector of strings in previous loop
	istringstream iss2(s);
	while (getline(iss2, toAen, ' ')) {
		int count = setOfWords[toAen];
		if (count > 1) {
			return toAen;
		}
	}

	return "NoRepetition";
}

// driver program
int main()
{
	string s("Ravi had been saying that he had been there");
	string firstWord = findFirstRepeated(s);
	if (firstWord != "NoRepetition")
		cout << "First repeated word :: "
			<< firstWord << endl;
	else
		cout << "No Repetitionn";
	return 0;
}
