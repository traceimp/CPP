/**
 * Date: 10/20/2018, 14:55
 * Author: Kim92
 * Comment: 변수와 참조자
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1;

	num2 = 3047;
	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "VAL: " << &num2 << endl;

	return 0;
}