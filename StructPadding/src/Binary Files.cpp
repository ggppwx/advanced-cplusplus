//============================================================================
// Name        : Binary.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1) // align the padding 

struct Person {
	char name[50]; // 50 bytes 
	// if we use string, it doesn't store the actaul data 

	int age;  // 4 bytes
	double weight;  // 8 bytes 
};
// now it's 62 instead of 64


#pragma pack(pop)  // ondo the packing 

int main() {


	cout << sizeof(Person) << endl; // but we have 64 bytes because of padding 




	return 0;
}
