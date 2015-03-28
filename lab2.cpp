#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "BMIs.h"
using namespace std;

// funtion main begins program execution
int main(void)
{
	double height;
	double mass;
	BMIs John_family;

	// read file file.in
	ifstream inFile("file.in",ios::in);
	if(!inFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	} // end read file
	
	// open file file.out
	ofstream outFile("file.out",ios::out);
	if(!outFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	} // end open file
	
	inFile >> height >> mass;

	while (height != 0 && mass != 0) {
		John_family.set_height(height);
		John_family.set_mass(mass);
		John_family.set_BMI();
		
		outFile << fixed << setprecision(2) << John_family.get_BMI() << John_family.category() << endl;

		inFile >> height >> mass;
	}

} // end main
