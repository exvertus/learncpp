# include <iostream>

int isOdd(int n)
{
	return n % 2;
}

int main()
{
	std::cout << "Input a number between 0 and 255: ";
	int userIn{};
	std::cin >> userIn;

	std::cout << "Number in binary: " << isOdd(userIn / 128) << isOdd(userIn / 64) << isOdd(userIn / 32) << isOdd(userIn / 16) << isOdd(userIn / 8) << isOdd(userIn / 4) << isOdd(userIn / 2) << isOdd(userIn / 1) << '\n';

	return 0;
}