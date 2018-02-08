//main.cpp Lab 1
//COSC 2030 Section 10
//Jordan Toppenberg
//January 29, 2018



#include <cstdlib>
#include <iostream>
#include<fstream>


//include other headers here

using std::ifstream;
using namespace std;
int main(int argc, char *argv[]) {

	ifstream files;
	files.open(*argv);
	cout << argc;
	if (files.is_open())
	{
		cout << *argv<<"\n";//printing out executible location
		
	}

	
	while (files.good())//does nothing

	{
		files >> argc;
		//only prints 2's for all 3 files!?
		cout << argc << "\n";
	}
	//use argv to get the file name
	//*check if argv has been initalized ELSE pull in with string (don't need..)
	//TODO: Open the provided file and check if it failed

	//TODO: Get number count
	//TODO: Get first & last 2 numbers

	//TODO: Close the file and report results
	cout << "end of prog\n";
}

//help Danny Radosevich 
//lots of cplusplus.com forums
