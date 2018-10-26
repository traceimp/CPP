/**
 * Date: 10/26/2018, 15:36
 * Author: Kim92
 * Comment: malloc & free�� ����ϴ� new & delete 1
 */

#include <iostream>
#include <string.h>	// C++���� C����� ��������� �߰��ϴ� �͵� ����!
#include <stdlib.h>
using std::cout;
using std::endl;

char * MakeStrAdr(int len)	// ���� ������ ���ڷ� �޾Ƽ�
{
	char * str = (char*)malloc(sizeof(char)*len);	// ���ڿ� ������ ���� �迭�� �� ������ �Ҵ��ϰ� �ִ�.
	return str;	// �� �ּҰ��� ��ȯ
}

int main(void)
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);

	return 0;
}