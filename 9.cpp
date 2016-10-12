#include <iostream>
using namespace std;

int main(){
	
	// declare variables
	const int NUM_COOKIES = 30;
	const int CALORIES = 300;
	double eachCookiesCalorie = CALORIES / NUM_COOKIES;
	int cookiesEaten;
	double totalCalories;
	
	// get prompt from the user
	cout << "How many cookies you've eaten? ";
	cin >> cookiesEaten;
	
	// calculate total calories
	totalCalories = cookiesEaten * eachCookiesCalorie;
	
	// print calories
	cout << "Total calories consumed: " << totalCalories << " calories";
	
}
