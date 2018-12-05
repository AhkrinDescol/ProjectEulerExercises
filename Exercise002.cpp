#include "Exercise002.hpp"

void Exercise002::execute()
{
	std::vector<int> evenFibNums{};
	int firstNumber{1}, secondNumber{2};
	constexpr int limit{4000000};
	int sum{};
	while (secondNumber < limit)
	{
		sum = firstNumber + secondNumber;
		if (!(sum & 1))
		{
			evenFibNums.push_back(sum);
		}
		firstNumber = secondNumber;
		secondNumber = sum;
	}
	int summedFibNumbers{};
	for (int fibNum : evenFibNums)
	{
		summedFibNumbers += fibNum;
	}
	std::cout << summedFibNumbers << std::endl;
}