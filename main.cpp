#include <iostream>
#include <string.h>

//библиотека algorithm
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <list>
#include <set>
#include <random>


int Solution() {
	static std::random_device rd;
	std::uniform_int_distribution<int> distr(-10, 10);

	return distr(rd);
}

int AnotherSolution() {
	static std::random_device rd;
	std::uniform_int_distribution<int> distr(0, 20);

	return distr(rd);
}

int main() {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	std::cout << "\n\nзадание: \n";
	std::vector<int> arrFirst(20);
	std::generate(arrFirst.begin(), arrFirst.end(), Solution);
	for (auto& i1 : arrFirst)
	{
		std::cout << i1 << " ";
	}
	std::cout << std::endl;


	std::vector<int> arrSecond(20);
	std::generate(arrSecond.begin(), arrSecond.end(), AnotherSolution);
	for (auto& i2 : arrSecond)
	{
		std::cout << i2 << " ";
	}
	std::cout << std::endl;


	std::vector<int> FullArr;


	for (auto& i1 : arrFirst)
	{
		for (auto& i2 : arrSecond) {

			if (i1 == i2) {
				FullArr.push_back(i1);
				break;
			}
			
		}
	}
	for (auto& i : FullArr)
	{
		std::cout << i << " ";
	}


	return 0;
}