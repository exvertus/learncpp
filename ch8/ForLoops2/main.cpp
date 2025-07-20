# include <iostream>

int sumTo(int to)
{
	int total{ 0 };
	for (int count{ 1 }; count <= to; ++count) {
		total += count;
	}
	return total;
}

int main()
{
	std::cout << "Enter an integer to sum to: ";
	int inTo{};
	std::cin >> inTo;

	std::cout << "The summed result is : " << sumTo(inTo) << '\n';

	return 0;
}