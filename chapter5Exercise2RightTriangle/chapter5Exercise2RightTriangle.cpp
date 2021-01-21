// This program makes a right angle triangle using functions
// Written by: Ayden Holgate
// Date: Jan. 19, 2021

// chapter5Exercise2RightTriangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void triangle(int){
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++){
		cin >> num;
		i = '*';

		cout <<  << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{// Start of program
	triangle(10);

	return 0;
}// End of program