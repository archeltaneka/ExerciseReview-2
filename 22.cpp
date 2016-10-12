#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159265 // define value of pi
using namespace std;

int main(){
	
	// declare variables
	double radAngle;
	double valueSin;
	double valueCos;
	double valueTan;
	
	// get prompt from the user
	cout << "Enter angle in radian: ";
	cin >> radAngle;
	
	// calculate sin, cos and tan value
	valueSin = sin(radAngle * PI / 180);
	valueCos = cos(radAngle * PI / 180);
	valueTan = tan(radAngle * PI / 180);
	
	// set print format
	cout << setprecision(4) << fixed << showpoint << right;
	
	// display results
	cout << "Sin of " << radAngle << " is " << valueSin << endl;
	cout << "Cosine of " << radAngle << " is " << valueCos << endl;
	cout << "Tan of " << radAngle << " is " << valueTan << endl;
	
	return 0;
}
