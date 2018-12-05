#include <iostream>
#include "Exercise001.hpp"
#include "Exercise002.hpp"

int getExerciseNumber();
void executeExercise(int exerciseNumber);

int main()
{
	int exerciseNumber{getExerciseNumber()};
	executeExercise(exerciseNumber);
	return 0;
}

int getExerciseNumber()
{
	constexpr int exercisesCompleted{2};
	int exerciseNumber{};
	while (exerciseNumber <= 0 || exerciseNumber > exercisesCompleted)
	{
		std::cout << "Enter the exercise number to execute: ";
		std::cin >> exerciseNumber;
	}
	return exerciseNumber;
}

void executeExercise(int exerciseNumber)
{
	switch (exerciseNumber)
	{
	case 1:
		Exercise001::execute();
		break;
	case 2:
		Exercise002::execute();
		break;
	default:
		std::cout << "Here be dragons." << std::endl;
	}
}
