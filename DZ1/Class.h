#pragma once

#include <iostream>

class Calculator {
public:
	double num1 = 0;
	double num2 = 0;

	double add(double num1, double num2) {
		return num1 + num2;
	};


	double multiply(double num1, double num2) {
		return num1 * num2;
	};

	double subtract_1_2(double num1, double num2) {
		return num1 - num2;
	};

	double subtract_2_1(double num1, double num2) {
		return num2 - num1;
	};

	double divide_1_2(double num1, double num2) {
		return num1 / num2;
	};

	double divide_2_1(double num1, double num2) {
		return num2 / num1;
	};

	bool set_num1() {
		bool b = false;
		if (num1 == 0) {
			b = true;
		};
		return b;
	};

	bool set_num2() {
		bool b = false;
		if (num2 == 0) {
			b = true;
		}
		return b;
	};
};