#include <iostream>
#include "Calculator.h"

void Calculator::Init()
{
	SumAdd = 0;
	SumMin = 0;
	SumMul = 0;
	SumDiv = 0;
}

double Calculator::Add(double num1, double num2)
{
	SumAdd++;
	return num1 + num2;
}

double Calculator::Min(double num1, double num2)
{
	SumMin++;
	return num1 - num2;
}

double Calculator::Mul(double num1, double num2)
{
	SumMul++;
	return num1 * num2;
}

double Calculator::Div(double num1, double num2)
{
	SumDiv++;
	return num1 / num2;
}

void Calculator::ShowOpCount()
{
	std::cout << "����: " << SumAdd << " ";
	std::cout << "����: " << SumMin << " ";
	std::cout << "����: " << SumMul << " ";
	std::cout << "������: " << SumDiv << std::endl;
}