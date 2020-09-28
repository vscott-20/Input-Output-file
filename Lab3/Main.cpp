/*
Viatris Scott
C++ Fall 2020
Due September 28, 2020
Lab 3 User and File I/O
This lab is inputting and outputting file information.
*/

#include <fstream>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

float mean_func(float num, float num2, float num3, float num4); // Mean function decalred

float deviation_func(float num, float num2, float num3, float num4, float mean); // Deviation function decalred

int main()
{
	int num; // Programs Numbers decalre
	int num2;
	int num3;
	int num4;
	int fileNum; // File Numbers declare 
	int fileNum2;
	int fileNum3;
	int fileNum4;
	ifstream inputFile; 
	ofstream outputFile;

	inputFile.open("inMeanStd.dat.txt"); // Input file name
	outputFile.open("outMeanStd.dat.txt"); // Output file name

	inputFile >> fileNum >> fileNum2 >> fileNum3 >> fileNum4; // File Numbers Inputted

	outputFile << "The numbers in the input file are " 
		<< fileNum << ' ' << fileNum2 << ' ' << fileNum3 << ' ' << fileNum4 << endl; // File numbers 

	outputFile << "The mean of these four numbers is "
		<< mean_func(fileNum, fileNum2, fileNum3, fileNum4);

	float file_mean = mean_func(fileNum, fileNum2, fileNum3, fileNum4); // File numbers outputted


	outputFile << "The stadard deviation of these four numbers is " <<
		deviation_func(fileNum, fileNum2, fileNum3, fileNum4, file_mean); // The deviation of the file numbers


	cout << "Enter four intergers " << endl;
	cin >> num >> num2 >> num3 >> num4; 
	cout << "Numbers you enter are "
		<< num << ' ' << num2 << ' ' << num3 << ' ' << num4 << endl; // Program numbers 

	cout << "The mean of these four numbers is " << 
		mean_func( num, num2, num3, num4); // Program numbers mean

	float mean = mean_func(num, num2, num3, num4); // Mean function 

	cout << " Standard deviation of these four numbers is " <<
		deviation_func(num, num2, num3, num4, mean); // Deviation function

	return 0;

}

float mean_func(float num, float num2, float num3, float num4)
{
	float mean = ((num + num2 + num3 + num4) / 4);

	return mean; 
}

float deviation_func(float num, float num2, float num3, float num4, float mean)
{
	float standard_deviation =(sqrt(((pow(num - mean, 2) + pow(num2 - mean, 2) + pow(num3 - mean, 2) + pow(num4 - mean, 2)) / 4)));

	return standard_deviation;
}