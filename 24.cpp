#include <iostream>
#include <string>
using namespace std;

int main(){
	
	// declare variables for the word game
	//const int NUM_CHAR = 100;
	
	string name;
	int age;
	string city;
	string collegeName;
	string profession;
	string animal;
	string petName;
	
	// get prompt from the user
	cout << "Welcome to the word game! \n";
	cout << endl;
	
	cout << "Enter your name: ";
	cin >> name;
	
	cout << "Age: ";
	cin >> age;
	
	cout << "City: ";
	cin >> city;
	
	cout << "College Name: ";
	cin >> collegeName;
	
	cout << "Profession: ";
	cin >> profession;
	
	cout << "Animal: ";
	cin >> animal;
	
	cout << "Pet's name': ";
	cin >> petName;
	
	// print the word game
	cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", "
		 << name << " went to college at " << collegeName << ". " << name << " graduated and went to work as a "
		 << profession << ". Then, " << name << " adopted a(n) " << animal << " named " << petName << ". They both lived happliy ever after!";
		 
	return 0;
	
}
