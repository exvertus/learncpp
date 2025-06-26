# include <iostream>

int main()
{
	int x{ 2'147'483'647 };
	std::cout << x << '\n';

	x = x + 1;
	std::cout << x << '\n';

	unsigned short y{ 65535 };
	std::cout << "y was: " << y << '\n';
	
	y = 65537;
	std::cout << "y is now: " << y << '\n';

	return 0;
}