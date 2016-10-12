#include <iostream>
using namespace std;

int main(){
	
	// declare variables
	const double WIDGETS_WEIGH = 12.5;
	double palletAndWidgets;
	double onlyPallet;
	int countWidgets;
	
	// get the palletWeigh itself with the widgets stacked from the user
	cout << "Enter the pallet weight itself: ";
	cin >> onlyPallet;
	cout << "Enter the pallet with widgets stacked on it: ";
	cin >> palletAndWidgets;
	
	// count the widgets stacked
	countWidgets = (palletAndWidgets - onlyPallet) / 12.5;
	
	// display number of widgets stacked
	cout << "The number of widgets stacked on the pallet is: ";
	cout << countWidgets;
	
	
}
