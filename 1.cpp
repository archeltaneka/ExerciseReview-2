#include <iostream>
using namespace std;

int main(){
	
	// declares distance, gallons and miles driven
	float distance;
	int gallons;
	float milesDriven;
	
	// get prompt from the user
	cout << "Enter the number of gallons: ";
	cin >> gallons;
	cout << "Enter number of miles approximately driven: ";
	cin >> milesDriven;
	
	// calculate MPG(Miles per Gallon)/distance
	distance = static_cast<float> (gallons/milesDriven);
	cout << "Distance travelled: " << distance << " miles";
	
	return 0;
	
}
