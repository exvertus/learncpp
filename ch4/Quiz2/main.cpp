# include <iostream>

double userDouble()
{
	std::cout << "Enter a double value: ";
	double userInput{};
	std::cin >> userInput;
	return userInput;
}

int main()
{
	double firstValue{ userDouble() };
	double secondValue{ userDouble() };

	std::cout << "Enter +, -, *, or /: ";
	char op {};
	std::cin >> op;

	double answer{};
	switch (op) {
		case '+':
			answer = firstValue + secondValue;
			break;
		case '-':
			answer = firstValue - secondValue;
			break;
		case '*':
			answer = firstValue * secondValue;
			break;
		case '/':
			answer = firstValue / secondValue;
	}

	std::cout << firstValue << ' ' << op << ' ' << secondValue << " is " << answer << '\n';

	return 0;
}