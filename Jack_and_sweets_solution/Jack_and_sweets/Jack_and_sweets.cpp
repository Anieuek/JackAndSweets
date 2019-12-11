// Jack_and_sweets.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>

int students, sweets, x, y;

int main()
{
	std::cout << "How many students are in your class:";
	std::cin >> students;
	
	std::cout << "How many sweets your mummy bought:";
	std::cin >> sweets;

	// x okresla najwieksza ilosc cukierkow na glowe, bez dzielenia na czesci, ale bez jack bo on moze zjesc dopiero wieczorem
	x = sweets / (students - 1);
	std::cout << "Maximum number of sweets for one student:" << x << std::endl;
	// y okresle ilosc cukierkow pozostalych dla jasia
	y = sweets - x * (students - 1);
	std::cout << "The rest for you:" << y << std::endl;

	return 0;
}