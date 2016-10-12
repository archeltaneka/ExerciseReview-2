#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	// declare seatA, seatB, seatC, tiketSold and income variables
	int buyTicketsA;
	int buyTicketsB;
	int buyTicketsC;
	float seatA = 15;
	float seatB = 12;
	float seatC = 9;
	int ticketSold;
	float income;
	
	// fixed output print
	cout << setprecision(2) << fixed << showpoint;
	
	// get prompt from the user
	cout << "How many tickets for seat A? ";
	cin >> buyTicketsA;
	cout << "How many tickets for seat B? ";
	cin >> buyTicketsB;
	cout << "How many tickets for seat C? ";
	cin >> buyTicketsC;
	
	// calculate ticketSold and income
	ticketSold = buyTicketsA + buyTicketsB + buyTicketsC;
	income = buyTicketsA * seatA + buyTicketsB * seatB + buyTicketsC * seatC;
	
	// fixed print message
	cout << setprecision(2) << fixed << showpoint;
	
	// print message
	cout << "Tickets sold: " << ticketSold << endl;
	cout << "Total income: " << income;
	
}
