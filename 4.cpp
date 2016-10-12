#include <iostream>
#include <string>
using namespace std;

int main(){
	
	// declare variables
	const int NUM_MONTH = 3;
	const int NUM_RAINFALL = 3;
	string inputMonth;
	string monthArr[NUM_MONTH];
	float rainFallArr[NUM_RAINFALL];
	float inputRainFall;
	float average;
	int i = 0;
	
	// get prompt from the user
	for(i; i < NUM_MONTH; i++)
	{
		cout << "Input month " << i + 1 << ": ";
		cin >> monthArr[i];
		cout << "Input amount of rainfall " << i + 1 << ": ";
		cin >> inputRainFall;
		average += inputRainFall / 3;
		
	}
	
	// print output
	cout << "The average rainfall for " << monthArr[0] << ", " << monthArr[1] << ", " << monthArr[2]
		 << " is " << average;
	
}
