/**
 * Date: 10/23/2018, 17:34
 * Author: Kim92
 * Comment: P90 _ const �����Ϳ� ���� ������ ���� �� �ִ� ������ �����ϰڴ�. ������ ��������� ����.
				  const int num=12;
				  ������ ������ �����ؼ� �� ������ ����Ű�� �غ���. �׸��� �� ������ ������ �����ϴ� �����ڸ� �ϳ� ��������.
				  ���������� �̷��� ����� ������ ������ �����ڸ� �̿��ؼ� num�� ����� ���� ����ϴ� ������ �ϼ��غ���.
 */

#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	const int num = 12;
	const int *ptr = &num;
	const int *(&ref) = ptr;

	cout << "num: " << num << endl;
	cout << "*ptr: " << *ptr << endl;
	cout << "*ref: " << *ref << endl;

	return 0;
}