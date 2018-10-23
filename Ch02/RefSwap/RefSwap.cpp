/**
 * Date: 10/23/2018, 15:26
 * Author: Kim92
 * Comment: Call by Reference ¿¹Á¦
 */

#include <iostream>
using std::cout;
using std::endl;

void SwapByRef2(int &ref1, int &ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	return 0;
}