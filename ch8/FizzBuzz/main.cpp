# include <iostream>

void fizzbuzz(int amount)
{
	for (int count{ 0 }; count <= amount; ++count)
	{
		bool printNum{ true };
		if ((count % 3) == 0)
		{
			std::cout << "fizz";
			printNum = false;
		}
		if ((count % 5) == 0)
		{
			std::cout << "buzz";
			printNum = false;
		}
		if ((count % 7) == 0)
		{
			std::cout << "pop";
			printNum = false;
		}
		if (printNum) 
		{
			std::cout << count;
		}
		std::cout << '\n';
	}
}

int main()
{
	std::cout << "How many iterations of fizzbuzz(pop) should I do? ";
	int iters{};
	std::cin >> iters;

	fizzbuzz(iters);

	return 0;
}