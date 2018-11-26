#include <iostream>
using std::cout; using std::endl;

class Rectangle
{
private:
	int num1, num2;

public:
	Rectangle() {}

	Rectangle(int n1, int n2) : num1(n1), num2(n2) {}

	void ShowAreaInfo()
	{
		cout << "¸éÀû : " << num1 * num2 << endl;
	}
};

class Square : public Rectangle
{
public:
	Square(int n) : Rectangle(n, n) {}
};

int main(void)
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();

	return 0;
}