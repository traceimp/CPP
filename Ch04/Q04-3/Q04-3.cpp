/**
 * Date: 11/14/2018, 18:22
 * Author: Kim92
 * Comment: Q04-2�� ������� ������ ����
			����1) Point, Circle, Ring Ŭ������ ������ ����
 */

#include <iostream>
using std::cout;
using std::endl;

class Point
{
private:
	int xpos, ypos;

public:
	// ������
	Point(int x, int y): xpos(x), ypos(y) {}

	/*void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}*/

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
	// �����ڷ� ���� - ���� �߽� ��ǥ �� �������� ���� ���� ����
	Circle(int x, int y, int r) : p(x, y)
	{
		radius = r;
	}

	// ���� �߽� ��ǥ �� �������� ���� ���� ����
	/*void SetCircleInfo(int x, int y, int r)
	{
		p.Init(x, y);
		radius = r;
	}*/
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
	Ring(int inX, int inY, int inR, int outX, int outY, int outR)
		: inCircle(inX, inY, inR), outCircle(outX, outY, outR)
	{

	}

	/*void Init(int inX, int inY, int inR, int outX, int outY, int outR)
	{
		inCircle.SetCircleInfo(inX, inY, inR);
		outCircle.SetCircleInfo(outX, outY, outR);
	}*/

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
	Ring ring(1, 1, 4, 2, 2, 9);
	//ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}