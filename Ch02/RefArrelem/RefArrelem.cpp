/**
 * Date: 10/20/2018, 15:03
 * Author: Kim92
 * Comment: �迭���(�迭�� �ƴ϶�, �迭�� ���)�� �����ΰ����Ǿ� �������� ������ �����ϴ�.
 */

#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	int arr[3] = { 1, 3, 5 };
	int &ref1 = arr[0];
	int &ref2 = arr[1];
	int &ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;
	return 0;
}