#include <iostream>
using std::cout; using std::endl;

class Base
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;

	Base() : num1(1), num2(2), num3(3) {}
};

class Derived : protected Base() { };	// empty!

int main(void)
{
	Derived drv;
	cout << drv.num3 << endl;	// 컴파일 에러 발생! => Base 클래스를 protected로 상속했기 때문

	return 0;
}