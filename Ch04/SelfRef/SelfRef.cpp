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
		cout << "��ü����" << endl;
	}

	SelfRef& Adder(int n)
	{
		num += n;
		return *this;		// ��ü �ڽ��� �����Ͱ� �ƴ� '��ü �ڽ��� ��ȯ'�ϰڴٴ� �ǹ� ('������ ����(������)'�� ��ȯ�ȴ�)
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