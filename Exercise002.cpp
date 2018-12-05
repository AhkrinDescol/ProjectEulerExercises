#include "Exercise002.hpp"

void Exercise002::execute()
{
	std::vector<int> evenFibNums{};
	int firstNumber{1}, secondNumber{2};
	constexpr int limit{4000000};
	int placeholder{};
	int summedFibNumbers{};
	while (secondNumber < limit)
	{
		if (!(secondNumber & 1))
		{
			summedFibNumbers += secondNumber;
		}
		placeholder = firstNumber + secondNumber;
		firstNumber = secondNumber;
		secondNumber = placeholder;
	}
	std::cout << summedFibNumbers << std::endl;
}