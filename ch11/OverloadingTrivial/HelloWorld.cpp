void foo(int)
{
}

void foo(const int&)
{
}

int main()
{
	int x{ 1 };
	foo(x);      // Trivial conversions are result in exact matches, so this results in more than one instance of an overloaded function

	return 0;
}