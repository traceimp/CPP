#include <iostream>
using std::cout;
using std::endl;

class TwoNumber
{
private:
	int num1;
	int num2;

public:
	TwoNumber(int num1, int num2)
	{
		// ������� = �Ű������� �ǹ�!
		this->num1 = num1;
		this->num2 = num2;
	}

	// ��� �̴ϼȶ����������� this �����͸� ����� �� ����.
	// ��� �����ϴ� ������ ���������, ����Ǵ� ���� �Ű������� �ν��ϱ� ������ �Ʒ��� ���� ���� ������ �����ϴ�.
	//TwoNumber(int num1, int num2)
	//	: num1(num1), num2(num2)
	//{
	//	//empty
	//}

	void ShowTwoNumber()
	{
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};

int main(void)
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}