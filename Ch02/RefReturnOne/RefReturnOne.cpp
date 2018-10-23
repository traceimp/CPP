/**
 * Date: 10/23/2018, 16:42
 * Author: Kim92
 * Comment: 반환형이 참조형인 예제 1
 */

#include <iostream>
using std::cout;
using std::endl;

int& RefRetFuncOne(int &ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int &num2 = RefRetFuncOne(num1);

	num1++;
	num2++;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;

}