//main.cpp Lab 1
//COSC 2030 Section 10
//Jordan Toppenberg
//January 29, 2018


#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::ifstream;
//include other headers here


using namespace std;
int main(int argc, char *argv[]) {
	ifstream files;
	string filename;
	//use argv to get the file name
	cout << "Please enter the file name: \n";
	//cin >> *argv;
	getline(cin, filename);
	cout << filename;
	files.open(filename);	
	if (files.is_open())
	{
		cout << "did it";
	}
	//TODO: Open the provided file and check if it failed

	files.open(filename);
	if (files.is_open())
	{
		cout << "did it";
	}
	files.open(*argv);
	cout <<"opened file"<< endl;

	while (!files);
	{
		cout << "Could not open: " << endl;
	}

	//TODO: Get number count
	//TODO: Get first & last 2 numbers

	//TODO: Close the file and report results
	cout << "end of prog";
}
