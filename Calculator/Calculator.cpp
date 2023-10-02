// Calculator.cpp: определяет точку входа для приложения.
//

#include "Calculator.h"

using namespace std;

void print_result(double result)
{
	cout << "\n" << "Result: " << result;
}

int main()
{
	long double first_number;
	long double second_number;
	string action;

	cout << "First number: ";
	cin >> first_number;

	cout << "\nSecond number: ";
	cin >> second_number;

	cout << "\nAction: ";
	cin >> action;

	if (action == "+")
	{
		print_result(first_number + second_number);
	}
	else if(action == "-")
	{
		print_result(first_number - second_number);
	}
	else if(action == "*")
	{
		print_result(first_number * second_number);
	}
	else if (action == "/")
	{
		print_result(first_number / second_number);
	}

	return 0;
}
