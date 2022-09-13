#include <iostream>
#include <math.h>
using namespace std;


int main(void){
	// Get two numbers and evaluate the expression
	// Test the condition(s): any two real numbers
	// exception: None

	double first_number;
	double second_number;
	double result;

	cout << " Enter the first number: ";
	cin >> first_number;

	cout << " Enter the second number: ";
	cin >> second_number;

	result = first_number * second_number;
	cout << " Result = " << result << "\n\n";
	system("pause");

	return 0;
}


