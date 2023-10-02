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
		if (second_number == 0)
		{
			cout << "\nError: First number is't divide";
			return 1;
		}
		print_result(first_number / second_number);
	}
	else 
	{
		cout << "\nError: Action is incorrect";
		return 2;
	}

	return 0;
}
