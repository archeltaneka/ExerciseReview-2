#include <iostream>
using namespace std;

int main(){
	
	// declare variables
	double celcius;
	double fahrenheit;
	
	// get prompt from the user
	cout << "Enter a degree(celcius): ";
	cin >> celcius;
	
	// calculate from celcius to fahrenheit and print display
	fahrenheit = (celcius * 9 / 5) + 32;
	
	cout << celcius << " degree celcius is " << fahrenheit << " degree fahrenheit";
	
	return 0;
	
}
