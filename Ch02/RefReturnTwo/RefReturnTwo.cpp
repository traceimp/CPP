/**
 * Date: 10/23/2018, 17:13
 * Author: Kim92
 * Comment: ��ȯ���� �������� ���� 2
 */

#include <iostream>
using std::cout;
using std::endl;

int& RefRetFuncOne(int &ref)	// RefReturnOne.cpp�� RefRetFuncOne�� ����!
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);
	
	num1 += 1;
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}