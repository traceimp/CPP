#include <iostream>

/*
	����1
	���� DefaultValue3.cpp�� ���ǵ� �Լ� BoxVolume�� '�Ű������� ����Ʈ �� ����' ���°� �ƴ�,
	'�Լ� �����ε�'�� ���·� �� �����غ���. ���� main �Լ��� �������� �ʾƾ� �ϸ�,
	�������� �����ؾ� �Ѵ�.
*/

int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);

int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	//std::cout << "[D, D, D] : " << BoxVolume() << std::endl;
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width*height;
}

int BoxVolume(int length, int width)
{
	return length * width*1;
}

int BoxVolume(int length)
{
	return length*1*1;
}

/*
	����2
	������ ���� ���·� �Լ� �����ε��� ������ �ִ�. ��� ������ �ִ��� �����غ���.
	===> ���� ���ڸ� �������� �ʴ� ����(SimpleFunc())�� ȣ���ϴ� ���
	     �� �Լ� ��� ȣ�������� �����ϱ� ������ ������ ������ �߻��Ѵ�.
	int SimpleFunc(int a=10)
	{
		return a+1;
	}

	int SimpleFunc(void)
	{
		return 10;
	}
*/