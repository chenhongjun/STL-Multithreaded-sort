#include "sort.h"


bool mi(int x, int y) {return x < y;}

int main()
{
	int timer = (int)time(nullptr);
	srand(timer);

	std::vector <int> test;
	
	for (int i = 0; i < 1000; ++i)
		test.push_back(rand()%1000);

	std::vector<int> end = sortMutiThread(test, 2, mi);
	
	std::cout << "OK" << std::endl;;
	for (int i = 0; i < 1000; ++i)
		std::cout << end[i] << '\t';
	std::cout << std::endl;
	return 0;
}
