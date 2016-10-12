#include <iostream>
using namespace std;

int main(){
	
	// declare variables
	const int NUM_CHAR = 100;
	char movieNames[NUM_CHAR];
	int adultTicketsSold;
	int childTicketsSold;
	const double ADULT_TICKET = 10.00;
	const double CHILD_TICKET = 6.00;
	double grossBoxOfficeProfit;
	double netBoxOfficeProfit;
	double amountDistributor;
	
	// get prompt from the user
	cout << "Enter the name of a movie: ";
	cin.getline(movieNames, NUM_CHAR - 1);
	cout << "How many adult tickets sold? ";
	cin >> adultTicketsSold;
	cout << "How many child tickets sold? ";
	cin >> childTicketsSold;
	
	// calculate theater's gross and net box office profit
	grossBoxOfficeProfit = adultTicketsSold * ADULT_TICKET + childTicketsSold * CHILD_TICKET;
	netBoxOfficeProfit = grossBoxOfficeProfit * 0.02;
	amountDistributor = grossBoxOfficeProfit - netBoxOfficeProfit;
	
	// display message
	cout << "Movie name: " << "\t\t " << movieNames << endl;
	cout << "Adult Tickets Sold: " << "\t\t " << adultTicketsSold << endl;
	cout << "Child Tickets Sold: " << "\t\t " << childTicketsSold << endl;
	cout << "Net Box Office Profit: " << "\t\t " << netBoxOfficeProfit << endl;
	cout << "Amount Paid to Distributor: " << "\t " << amountDistributor;
	
	return 0;
	
}
