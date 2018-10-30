#ifndef __CALCULATOR_H_
#define __CALCULATOR_H__

class Calculator
{
private:
	int SumAdd;
	int SumMin;
	int SumMul;
	int SumDiv;
public:
	void Init();
	double Add(double num1, double num2);
	double Min(double num1, double num2);
	double Mul(double num1, double num2);
	double Div(double num1, double num2);
	void ShowOpCount();
};

#endif // !__CALCULATOR_H_
