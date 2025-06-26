# include <iostream>

int main()
{
	std::cout << true << '\n';
	std::cout << !true << '\n';

	bool b{ false };
	std::cout << b << '\n';
	std::cout << !b << '\n';

	std::cout << std::boolalpha;

	bool b1 = -5;
	std::cout << b1 << '\n';

	bool b2 = 0;
	std::cout << b2 << '\n';

	return 0;
}