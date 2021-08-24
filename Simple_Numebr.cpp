#include <iostream>

int main()
{
    int n = 0;
	std::cout << "Write a number from 1" << std::endl;
    std::cin >> n;
	while (n <= 1) {
		std::cout << "Your number is wrong, enter a new one from 1" << std::endl;
		std::cin >> n;
	}
	bool m = false;
	for (size_t i = 2; i < n; i++)
	{
		if (n%i==0)
		{
			m = true;
			break;
		}
	}
	if (m == true)
	{
		std::cout << "Your number is not simple";
	}
	else
	{
		std::cout << "Your number is simple";
	}

}

