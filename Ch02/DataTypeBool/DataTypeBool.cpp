/**
 * Date: 10/20/2018, 14:49
 * Author: Kim92
 * Comment: bool형 데이터
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool IsPositive(int num)
{
	if (num <= 0)
		return false;
	else
		return true;
}

int main(void)
{
	bool isPos;
	int num;
	cout << "Input number: ";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos)
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;

	return 0;
}