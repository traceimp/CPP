/**
 * Date: 10/23/2018, 17:21
 * Author: Kim92
 * Comment: ��ȯ���� �������� ���� 3
 */

#include <iostream>
using std::cout;
using std::endl;

int RefRetFuncTwo(int &ref)		// ��ȯ���� �⺻���� int�̴�!
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncTwo(num1);

	num1 += 1;
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}