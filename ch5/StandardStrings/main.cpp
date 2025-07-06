#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter you full name: ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);

	std::cout << "Enter you age: ";
	int age{};
	std::cin >> age;

	int length{ static_cast<int>(name.length()) };
	std::cout << "Your age + length of name is: " << length + age << '\n';

	return 0;
}