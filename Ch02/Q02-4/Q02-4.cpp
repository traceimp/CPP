/**
 * Date: 10/26/2018, 18:00
 * Author: Kim92
 * Comment: P.99
 */

//���� 1
//���� ǥ���Լ��� ȣ���ϴ� ������ �����, C++�� ����� �����ؼ� ������. 
//�׸��� ������ ������ ���������, �Ʒ��� �Լ����� �ּ� 1ȸ �̻� ȣ���ؾ� �Ѵ�.
//����� ���� �Լ����� C����� ��� <string.h>�� ����Ǿ� �ִ�.

#include <iostream>
#include <cstring>	// ���� 1
#include <ctime>	// ���� 2
#include <cstdlib>	// ���� 2
using std::cout;
using std::endl;

int main(void)
{
	// ���� 1
	/*char str[20] = { "melong~~~~~~~~" };
	char strCpy[20];

	cout << strlen(str) << endl;
	cout << strcat(str, "!!") << endl;
	cout << strcpy(strCpy, str) << endl;
	cout << strcmp(str, strCpy) << endl;*/

	// ���� 2
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		cout << rand()%100 << ' ';

	} cout << endl;

	return 0;

}