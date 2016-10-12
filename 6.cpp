#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	// declares ingredients variable
	const float SUGAR_CUPS = 1.5;
	const float BUTTER_CUPS = 1;
	const float FLOUR_CUPS = 2.75;
	int cookies = 48;
	float sugarCookiesEach;
	float butterCookiesEach;
	float flourCookiesEach;
	int inputCookies;
	
	// calculate for each cookie
	sugarCookiesEach = SUGAR_CUPS / cookies;
	butterCookiesEach = BUTTER_CUPS / cookies;
	flourCookiesEach = FLOUR_CUPS / cookies;
	
	// set format output
	cout << setprecision(2) << fixed << showpoint;
	
	// get prompt from the user
	cout << "How many cookies do you want to make? ";
	cin >> inputCookies;
	
	cout << "For making " << inputCookies << " you have to use: " << endl;
	cout << sugarCookiesEach * inputCookies << " cups of sugar" << endl;
	cout << butterCookiesEach * inputCookies << " cups of butter" << endl;
	cout << flourCookiesEach * inputCookies << " cups of flour" << endl;
	
}
