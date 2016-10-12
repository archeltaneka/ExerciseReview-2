#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	// declare testScore and average variable
	const int NUM_TESTSCORE = 5;
	float testScore[NUM_TESTSCORE];
	float average;
	
	// get prompt from the user
	for(int i = 0; i < 5; i++)
	{
		cout << "Input test " << i + 1 << " score: ";
		cin >> testScore[i];
		average += testScore[i] / 5;
	}
	
	// manipulate output
	cout << setprecision(1) << fixed << showpoint;
	
	// calculate average and print output
	cout << "The average test score in the class is: " << average;
	
	return 0;
	
}
