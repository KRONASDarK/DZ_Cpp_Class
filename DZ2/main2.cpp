#include <iostream>
#include "Class2.h"

int main() {
	setlocale(LC_ALL, "Ru");

	int x;
	Counter counter;
	std::string enter;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите y или n: ";
	std::cin >> enter;

	if (enter == "y") {
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> x;
		counter = x;
	}

	while (true)
	{
		if (enter == "y") {
			
			char input;

			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> input;

			if (input == 'x') {
				std::cout << "До свилания!" << std::endl;
				exit(0);
			}
			counter.command(input, counter);
		} else if (enter == "n") {
			char input;

			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> input;

			if (input == 'x') {
				std::cout << "До свилания!" << std::endl;
				exit(0);
			}
			counter.command(input, counter);
		};
	};

	return 0;
};