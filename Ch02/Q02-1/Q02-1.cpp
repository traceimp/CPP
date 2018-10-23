/**
 * Date: 10/23/2018, 15:56
 * Author: Kim92
 * Comment: P.80 _ ������ ����� Call-by-reference ����
 */

#include <iostream>
using std::cout;
using std::endl;


// ����1: ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
void Adder(int &num)
{
	num++;
}

// ����1: ���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ�
void AbsoluteNum(int &num)
{
	num *= -1;
}

// ����3: ptr1�� ptr2�� ����Ű�� ����� ���� �ٲ�� �Լ� ����
void SwapPointer(int *(&ptr1), int *(&ptr2))
{
	int * temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}


int main(void)
{

	// ���� 1
	// �����ڸ� �̿��ؼ� ���� �䱸���׿� �����ϴ� �Լ��� ���� �����Ͽ���.
	// - ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
	// - ���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ�
	// �׸��� ���� �� �Լ��� ȣ���Ͽ� �� ����� Ȯ���ϴ� main �Լ��� �ۼ��Ͽ���.
	int num = -1;
	cout << "���� num�� ��: " << num << endl;
	Adder(num);
	cout << "1�� ����:" << num << endl;
	AbsoluteNum(num);
	cout << "���� ��ȯ: " << num << endl;


	// ����2
	// �ռ� �Ұ��� ���� RefSwap.cpp�� SwapByRef2 �Լ��� ������ ���·� ȣ���ϸ� ������ ������ �߻��Ѵ�.
	// SwapByRef2(23, 45);
	// ������ ������ �߻��ϴ� ������ �����ΰ�?
	// ��: �����ڴ� ������� �� �� ����.

	
	// ����3
	// ������ ���ÿ� �ռ� ���� ���� �ڵ带 ����.
	/*int main(void)
	{
		int num1 = 5;
		int *ptr1 = &num1;
		int num2 = 10;
		int *ptr2 = &num2;
		. . . .
	}*/
	// ���� �ڵ带 ���� ptr1�� ptr2�� ���� num1�� num2�� ����Ű�� �ִ�.
	// �� �� ptr1�� ptr2�� ������� ������ ���� �Լ��� ȣ���ϰ� ����,
	// SwapPointer(ptr1, ptr2);
	// ptr1�� ptr2�� ����Ű�� ����� ���� �ٲ�� SwapPointer �Լ��� �����غ���.

	int num1 = 5;
	int *ptr1 = &num1;

	int num2 = 10;
	int *ptr2 = &num2;
	
	cout << *ptr1 << " " << *ptr2 << endl;
	SwapPointer(ptr1, ptr2);
	cout << *ptr1 << " " << *ptr2 << endl;

	return 0;
}