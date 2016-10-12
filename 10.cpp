#include <iostream>
using namespace std;

int main(){
	
	// declare variables
	double replacementCost;
	double minAmountCost;
	const double MIN_AMOUNT_PERCENTAGE = 0.08;
	
	// get prompt from the user
	cout << "Enter the replacement cost of a building: ";
	cin >> replacementCost;
	
	// calculate minimum amount cost
	minAmountCost = replacementCost * MIN_AMOUNT_PERCENTAGE;
	
	// print display message
	cout << "The minimum amount of insurance should be bought:$ " << minAmountCost;
	
	return 0;
	
}
