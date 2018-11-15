/**
 * Date: 11/13/2018, 18:20
 * Author: Kim92
 * Comment: �پ��� Ŭ������ ����
 */

#include <iostream>
using std::cout;
using std::endl;

class Point
{
private:
	int xpos, ypos;

public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	int radius;		// �������� ���� ����
	Point p;

public:
	// ���� �߽� ��ǥ �� �������� ���� ���� ����
	void SetCircleInfo(int x, int y, int r)
	{
		p.Init(x, y);
		radius = r;
	}
	// ���� �߽� ��ǥ �� �������� ���� ���� ���
	void ShowRadiusNum() const
	{
		cout << "radius: " << radius << endl;
		p.ShowPointInfo();
	}
};

class Ring
{
	Circle inCircle;	// ���� ��
	Circle outCircle;	// �ܺ� ��

public:
	void Init(int inX, int inY, int inR, int outX, int outY, int outR)
	{
		inCircle.SetCircleInfo(inX, inY, inR);
		outCircle.SetCircleInfo(outX, outY, outR);
	}

	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		inCircle.ShowRadiusNum();
		cout << "Outter Circle Info..." << endl;
		outCircle.ShowRadiusNum();

	}
};
int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}