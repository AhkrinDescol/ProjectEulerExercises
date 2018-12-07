#include "Exercise002.hpp"

void Exercise002::execute()
{
	int firstNumber{1}, secondNumber{2};
	constexpr int limit{4000000};
	int placeholder{};
	int summedEvenFibs{};
	while (secondNumber < limit)
	{
		if (!(secondNumber & 1))
		{
			summedEvenFibs += secondNumber;
		}
		placeholder = firstNumber + secondNumber;
		firstNumber = secondNumber;
		secondNumber = placeholder;
	}
	std::cout << summedEvenFibs << std::endl;
}