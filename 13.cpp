#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	// declare variables
	const double YEN_PER_DOLLAR = 98.93;
	const double EUROS_PER_DOLLAR = 0.74;
	double inputDollar;
	double yenConvert;
	double euroConvert;
	
	// get prompt from the user
	cout << "This program will convert US Dollar into yen and euro \n";
	cout << endl;
	
	cout << "Enter dollar rate: ";
	cin >> inputDollar;
	
	// convert dollar into yen and euro
	yenConvert = inputDollar * YEN_PER_DOLLAR;
	euroConvert = inputDollar * EUROS_PER_DOLLAR;
	
	// set output format
	cout << setprecision(2) << fixed << showpoint;
	
	// print output message
	cout << "$" << inputDollar << " is " << yenConvert << " yen" << endl;
	cout << "$" << inputDollar << " is " << euroConvert << " euro";
	
}
