#include <iostream>
#include "Class.h"

int main() {
	setlocale(LC_ALL, "Ru");

	bool run_program = true;
	while (run_program) {
		Calculator calc;

		while (calc.set_num1())
		{
			std::cout << "Введите num1: ";
			std::cin >> calc.num1;
			if (calc.set_num1()) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		}

		while (calc.set_num2())
		{
			std::cout << "Введите num2: ";
			std::cin >> calc.num2;
			if (calc.set_num2()) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		}

		std::cout << "num 1 + num2 = " << calc.add(calc.num1, calc.num2) << std::endl;
		std::cout << "num 1 - num2 = " << calc.subtract_1_2(calc.num1, calc.num2) << std::endl;
		std::cout << "num 2 - num1 = " << calc.subtract_2_1(calc.num1, calc.num2) << std::endl;
		std::cout << "num 1 * num2 = " << calc.multiply(calc.num1, calc.num2) << std::endl;
		std::cout << "num 1 / num2 = " << calc.divide_1_2(calc.num1, calc.num2) << std::endl;
		std::cout << "num 2 / num1 = " << calc.divide_2_1(calc.num1, calc.num2) << std::endl;
	}

	return 0;
};