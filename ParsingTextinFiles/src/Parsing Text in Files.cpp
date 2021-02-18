//============================================================================
// Name        : Parsing.cpp
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

	string filename = "stats.txt";
	ifstream input;

	input.open(filename);

	if(!input.is_open()) {
		return 1;
	}

	while(input) {
		string line;

		getline(input, line, ':'); // it will remove delimiter 

		int population;
		// extract 
		input >> population;

		// input.get();  get next char 
		input >> ws; // handle white space C++ 11

		if(!input) {
			// remember line 3 could empty, then it's in error condition 
			break;
		}

		cout << "'" << line << "'" << " -- '" << population << "'" << endl;
	}

	input.close();

	return 0;
}
