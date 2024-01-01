#include <iostream>

int main()
{
	std::cout << "Type in a number and I will double it ";
    int number{};
    std::cin >> number;

    std::cout << "\nYour number is " << number * 2 << "\n";
	return 0;
}