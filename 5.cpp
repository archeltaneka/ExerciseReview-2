#include <iostream>
using namespace std;

int main(){
	
	// declare variables
	int maleStudents;
	int femaleStudents;
	int totalStudents;
	float malePercentage;
	float femalePercentage;
	
	// get prompt from the user
	cout << "How many male students in the class? ";
	cin >> maleStudents;
	cout << "How many female students in the class? ";
	cin >> femaleStudents;
	
	// calculate male students percentage
	totalStudents = maleStudents + femaleStudents;
	
	malePercentage = (static_cast<float>(maleStudents) / totalStudents) * 100;
	femalePercentage = (static_cast<float>(femaleStudents) / totalStudents) * 100;
	
	// print output
	cout << "Total students: " << totalStudents << endl;
	cout << "The percentage of males students is: " << malePercentage << "%" << endl;
	cout << "The percentage of female students is: " << femalePercentage << "%";
	
}
