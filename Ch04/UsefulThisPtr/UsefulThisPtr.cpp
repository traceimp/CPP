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
		// 멤버변수 = 매개변수를 의미!
		this->num1 = num1;
		this->num2 = num2;
	}

	// 멤버 이니셜라이저에서는 this 포인터를 사용할 수 없다.
	// 대신 저장하는 변수는 멤버변수로, 저장되는 값은 매개변수로 인식하기 때문에 아래와 같은 문장 구성이 가능하다.
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