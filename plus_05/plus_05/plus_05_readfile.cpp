#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>	// file i/o support
#include <cstdlib>  //support for exit()

const int SIZE = 60;

using namespace std;

int main()
{
	char filename[SIZE];
	ifstream inFile;

	cout << "Enter name of data file:";  //object for halding file input
	cin.getline(filename, SIZE);

	inFile.open(filename);				 //associate inFile with a file

	if (!inFile.is_open())				 // fail to open file
	{
		cout << "Could not open the file" << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;					 //get first value;

	while (inFile.good())				 //while input good and not at EOF
	{
		++count;						 //one more item read
		sum += value;					 //calculate running total
		inFile >> value;				 //get next value
	}

	if (inFile.eof())
		cout << "End of file reached.\n";

	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknow reason.\n";

	if (count == 0)
		cout << "No data processed.\n";

	else {
		cout << "Item read:" << count << endl;
		cout << "Sum:" << sum << endl;
		cout << "Average:" << sum / count << endl;
	}

	inFile.close();					    //finished withe the file

	system("pause");
	return 0;
}