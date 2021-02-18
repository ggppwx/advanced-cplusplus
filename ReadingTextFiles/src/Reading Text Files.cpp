//============================================================================
// Name        : Reading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {

	string inFileName = "test.txt";

	ifstream inFile;  // input file stream 
	// can do fstream too 

	inFile.open(inFileName);

	if (inFile.is_open()) {

		string line;

		while (inFile) {  // ! inFile.eof()
			// but inFile has a very useful operator overload 
			// the bool operator of inFile has been overloaded 
			getline(inFile, line);
			cout << line << endl;
		}

		inFile.close();
	} else {
		cout << "Cannot open file: " << inFileName << endl;
	}

	return 0;
}
