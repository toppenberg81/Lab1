//main.cpp Lab 1
//COSC 2030 Section 10
//Jordan Toppenberg
//January 29, 2018



#include <cstdlib>
#include <iostream>
#include<fstream>
#include<string>


//include other headers here

using std::ifstream;
using namespace std;
int main(int argc, char *argv[]) {

	ifstream files;
	string filename; 
	cout << "Please enter your file name: \n";
	cin >> filename;
	char *string = new char[filename.length() + 1];
	strcpy(string, filename.c_str());
	*argv = string;


	//*argv = "num1.txt"; I tried alot of different things and
	//could not get the command line input to work through 
	//Visual studios I found the debugging tab and put in 
	//the executable location followed by the file name with no success


	files.open(*argv);
	
	int frst_count = 0;
	cout << "\nThe first two nubmers are: ";
	while (!files.fail())
	{
		while (files >> argc)
		{
			if (frst_count == 0 || frst_count == 1)
			{
				cout <<"\n "<< argc<<"\n";
			}
			frst_count++;
		}
	}
	cout << "\nThere are " << frst_count << " integers in the file.\n ";
	files.close();
	files.open(*argv);

	cout << "\nThe last two numbers are: ";

	int snd_count = 0;
	if (files.is_open())
	{
		while (files >> argc)
		{
			snd_count++;
			if (snd_count == frst_count - 1 || snd_count == frst_count)
			{
				cout << "\n" << argc<<"\n";
			}
		}
	}

	files.close();
	

	//TODO: Get number count
	//TODO: Get first & last 2 numbers

	//TODO: Close the file and report results
	cout << "\nend of prog\n";
}

//help Danny Radosevich 
//lots of cplusplus.com forums
