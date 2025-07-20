# include <iostream>

int calculate(int x, int y, char op)
{
	switch (op)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	case '%':
		return x % y;
	default:
		std::cout << "Error: unknown operator\n";
		return 0;
	}
}

int main()
{
	std::cout << "Enter an integer: ";
	int first{};
	std::cin >> first;

	std::cout << "Enter another integer: ";
	int second{};
	std::cin >> second;

	std::cout << "Enter an operator (+, -, *, /, or %): ";
	char op{};
	std::cin >> op;

	int result{ calculate(first, second, op) };
	std::cout << result;
	
	return 0;
}