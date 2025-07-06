# include <iostream>

int five()
{
	return 5;
}

int main()
{
	constexpr double gravity{ 9.8 };  // this is okay even though it is non-integral
	constexpr int sum{ 4 + 5 };
	constexpr int something{ sum };

	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;

	// These should give compile errors
	constexpr int myAge{ age };
	constexpr int f{ five() };

	return 0;
}