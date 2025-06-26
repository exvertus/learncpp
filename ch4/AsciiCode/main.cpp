# include <iostream>

int main()
{
	std::cout << "Enter a single character: ";
	char myChar{};
	std::cin >> myChar;

	int asciiCode{};
	asciiCode = myChar;

	std::cout << "You entered '" << myChar << "', which has ASCII code " << asciiCode << '\n';

	return 0;
}