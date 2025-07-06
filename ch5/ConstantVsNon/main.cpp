# include <iostream>

int getNumber()
{
	std::cout << "Enter a number: ";
	int y{};
	std::cin >> y; // runtime-only

	return y;
}

// The return value of a non-constexpr func is a runtime expression
// even though the return expression is a constant expression
int five()
{
	return 5; // constant expression but it doesn't matter due to the function
}

int main()
{
	// Literals can be used in constant expressions, so the following are constant expressions
	5;
	1.2;
	"Hello World!";

	// Most operators that have constant expression operands can be used in constant expressions
	// these are all constant expressions:
	5 + 6;
	1.2 * 3.4;
	8 - 5.6;
	sizeof(int) + 1;

	// Runtime expressions:
	getNumber();
	five();
	std::cout << 5;

	// Const integral variables with a constant expression initializer can be used in constant expressions:
	const int a{ 5 };
	const int b{ a };
	const long c{ a + 2 };

	// These cannot be used in constant expressions
	int d{ 5 };
	const int e{ d };
	const double f{ 1.2 };

	return 0;
}