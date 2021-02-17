//============================================================================
// Name        : Custom.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>

using namespace std;

class MyException: public exception {
public:
	virtual const char* what() const throw() { // prototype to override what() 
		return "Something bad happened!";
	}
};

class Test {
public:
	void goesWrong() {
	// void goesWrong() throw() { // throw() means not throw excpetion 
		throw MyException();
	}
};

int main() {

	Test test;

	try {
		test.goesWrong();
	}
	catch(MyException &e) {
		cout << e.what() << endl;
	}


	return 0;
}
