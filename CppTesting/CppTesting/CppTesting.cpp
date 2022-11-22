#include <iostream>
//#include "Enemy.h"

int main()
{
	int example[5];

	//std::cout << sizeof(example) / sizeof(int);

	for (int i = 0; i < sizeof(example) / sizeof(int); i++)
	{
		example[i] = i;
		std::cout << example[i];

	}
	std::cin.get();
}