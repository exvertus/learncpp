# include <iostream>

int getValueFromUserUB()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	// No return statement
}

int main()
{
	int num{ getValueFromUserUB() };

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}