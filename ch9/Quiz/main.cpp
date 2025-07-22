#include <iostream>
#include <random>

int getRandom(int low, int high)
{
	std::mt19937 mt{ std::random_device{}() };
	std::uniform_int_distribution gen{ low, high };
	return gen(mt);
}

void startGame(int low, int high, int tries)
{
	std::cout << "Let's play a game. I'm thinking of a number between " << low << " and " << high << ". You have " << tries << " tries to guess what it is.\n";
}

void ignoreLine()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool clearFailedExtraction()
{
	if (!std::cin)
	{
		if (std::cin.eof())
		{
			std::exit(0);
		}

		std::cin.clear();
		ignoreLine();

		return true;
	}

	return false;
}

int getGuess(int min, int max)
{
	while (true)
	{
		int guess{};
		std::cin >> guess;
		
		if (clearFailedExtraction())
		{
			std::cout << "Invalid input. Try again.\n";
			continue;
		}
		if (guess < min || guess > max)
		{
			std::cout << "Input out of range. Try again.\n";
			continue;
		}

		ignoreLine();
		return guess;
	}
}

bool playRound(int answer, int round, int min, int max)
{
	std::cout << "Guess #" << round << ": ";
	int guess{ getGuess(min, max) };

	if (guess < answer)
	{
		std::cout << "Your guess is too low\n";
		return false;
	}
	else if (guess > answer)
	{
		std::cout << "Your guess is too high\n";
		return false;
	}
	else
	{
		std::cout << "Correct! You win!\n";
		return true;
	}
}

void playGame(int low, int high, int tries)
{
	startGame(low, high, tries);
	bool gameOver{ false };
	int round{ 1 };
	const int answer{ getRandom(low, high) };
	while (!gameOver && (round <= tries))
	{
		gameOver = playRound(answer, round, low, high);
		++round;
	}
}

bool replay()
{
	char answer{};
	while (true)
	{
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> answer;

		if (!clearFailedExtraction())
		{
			ignoreLine();
		}
		switch (answer)
		{
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			std::cout << "Invalid choice. Try again.\n";
		}
	}
}

int main()
{
	constexpr int smallest{ 1 };
	constexpr int largest{ 100 };
	constexpr int rounds{ 7 };

	bool keepPlaying{ true };
	while (keepPlaying)
	{
		playGame(smallest, largest, rounds);
		keepPlaying = replay();
	}

	return 0;
}