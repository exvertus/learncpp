# include <iostream>

int main()
{
	int letter{ 97 };
	while (letter <= 122)
	{
		std::cout << static_cast<char>(letter) << " " << letter << '\n';
		++letter;
	}
}