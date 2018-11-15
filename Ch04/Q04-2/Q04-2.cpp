/**
 * Date: 11/13/2018, 18:20
 * Author: Kim92
 * Comment: 다양한 클래스의 정의
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
	int radius;		// 반지름의 길이 정보
	Point p;

public:
	// 원의 중심 좌표 및 반지름의 길이 정보 저장
	void SetCircleInfo(int x, int y, int r)
	{
		p.Init(x, y);
		radius = r;
	}
	// 원의 중심 좌표 및 반지름의 길이 정보 출력
	void ShowRadiusNum() const
	{
		cout << "radius: " << radius << endl;
		p.ShowPointInfo();
	}
};

class Ring
{
	Circle inCircle;	// 내부 원
	Circle outCircle;	// 외부 원

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