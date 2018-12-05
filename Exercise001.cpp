#include "Exercise001.hpp"

void Exercise001::execute()
{
	std::set<int> multiples{};
	constexpr int limit{1000};
	for (int i{3}; i < limit; i += 3)
	{
		multiples.insert(i);
	}
	for (int i{5}; i < limit; i += 5)
	{
		multiples.insert(i);
	}
	int sum{std::reduce(multiples.begin(), multiples.end())};
	std::cout << sum << std::endl;
}