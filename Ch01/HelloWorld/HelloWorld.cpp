#include <iostream>
// C++���� ǥ�� ���̺귯��(������ ������ ��� ������ �ƴ�) Ȯ���ڴ� .h�̳� ���� ����

int main(void)
{
	int num = 20;
	// std::cout �� <<�� ���� ���
	std::cout << "Hello World!" << std::endl;	// << std::endl�� ������ �ǹ�
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0;
}