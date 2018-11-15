#include <iostream>
using std::cout;
using std::endl;

class SelfRef
{
private:
	int num;

public:
	SelfRef(int n) : num(n)
	{
		cout << "객체생성" << endl;
	}

	SelfRef& Adder(int n)
	{
		num += n;
		return *this;		// 객체 자신의 포인터가 아닌 '객체 자신을 반환'하겠다는 의미 ('참조의 정보(참조값)'가 반환된다)
	}

	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef &ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}