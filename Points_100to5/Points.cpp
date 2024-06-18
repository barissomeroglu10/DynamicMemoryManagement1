/*
In this code, we convert points from base 100 to base 5.
Purpose of the code is learn how to use dynamic memory management.

Developer: Barış Someroğlu
Date: 18.06.2024 - 03:00 pm
*/

#include <iostream>

using namespace std;

// Function prototype
void Convertor(int*);

int main()
{
	// Dynamic memory section
	int* Number = new int;

	if (!Number)
	{
		cout << "Memory reserved error!" << endl;
	}

	cout << "Memory Address for Number: " << Number;
	
	cout << "\n\nPlease Enter Your Note: ";
	cin >> *Number;

	// Call function
	Convertor(Number);

	// Delete the memory after process
	delete Number;

	return 0;
}

// Function definition
void Convertor(int* Note)
{
	if (*Note >= 85 && *Note <= 100)
		cout << "\nYour Note is 5" << endl;

	else if (*Note >= 70 && *Note < 85)
		cout << "\nYour Note is 4" << endl;

	else if (*Note >= 50 && *Note < 70)
		cout << "\nYour Note is 3" << endl;

	else if (*Note >= 25 && *Note < 50)
		cout << "\nYour Note is 2" << endl;

	else if (*Note >= 0 && *Note < 25)
		cout << "\nYour Note is 1" << endl;

	else
		cout << "\nPlease Enter a Valid Note!" << endl;
}
