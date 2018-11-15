#include <iostream>
using std::cout;
using std::endl;

class AAA 
{
private:
	int num;

public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const		// Ŭ���� ���ο� ��ü�� ����!
	{
		AAA * ptr = new AAA(n);
		return *ptr;
	}

	void ShowNum() const { cout << num << endl; }

private:
	AAA(int n) : num(n) {}				// private �����ڸ� �̿��ؼ� AAA ��ü�� ���� �� ��ȯ�ϰ� �ִ�.
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA &obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA &obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete &obj1;
	delete &obj2;

	return 0;
}