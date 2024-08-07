#include "Func.h"


int main()
{
	int x = 5;

	std::cout << "[IN]: " << x << std::endl;
	std::cout << "[OUT]: " << Sqr(x) << std::endl;


	std::vector<int> Array{-1, 4, 7};

	std::cout << "[IN]: ";
	for (auto elem : Array)
	{
		std::cout << elem << ", ";
	}

	Array = Sqr(Array);

	std::cout << "\n[OUT]: ";

	for (auto elem : Array)
	{
		std::cout << elem << ", ";
	}

	return 0;
}