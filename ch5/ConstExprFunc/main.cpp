# include <iostream>

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

constexpr int cmax(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int m1{ max(5, 6) };
	const int m2{ max(5, 6) };
	//constexpr int m3{ max(5, 6) }; //compile error

	int m4{ cmax(5, 6) };			// best practice would mark this as constexpr
	const int m5{ cmax(5, 6) };     // best practice would mark this as constexpr
	constexpr int m6{ cmax(5, 6) };

	std::cout << m1 << '\n';
	std::cout << m2 << '\n';
	std::cout << m4 << '\n';
	std::cout << m5 << '\n';
	std::cout << m6 << '\n';

	return 0;
}