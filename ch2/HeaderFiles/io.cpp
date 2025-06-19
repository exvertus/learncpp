#include "io.h"
#include <iostream>

int readNumber()
{
	std::cout << "Type an integer: ";
	int x = {};
	std::cin >> x;
	return x;
}

void writeAnswer(int answer)
{
	std::cout << "The sum is: " << answer << '\n';
}