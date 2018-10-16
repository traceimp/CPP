#include <iostream>
/*
	다음 main 함수에서 필요로 하는 swap 함수를 오버로딩 해서 구현해보자.

	[실행의 예]
	30 20
	Z A
	5.555 1.111
*/

int swap(int * num1, int * num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	return *num1, *num2;
}

char swap(char * ch1, char * ch2)
{
	char temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;

	return *ch1, *ch2;
}

double swap(double * dbl1, double * dbl2)
{
	double temp = *dbl1;
	*dbl1 = *dbl2;
	*dbl2 = temp;

	return *dbl1, *dbl2;
}

int main(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
	
	return 0;
}