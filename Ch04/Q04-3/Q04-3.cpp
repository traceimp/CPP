/**
 * Date: 11/14/2018, 18:22
 * Author: Kim92
 * Comment: Q04-2를 기반으로 생성자 응용
			문제1) Point, Circle, Ring 클래스의 생성자 정의
 */

#include <iostream>
using std::cout;
using std::endl;

class Point
{
private:
	int xpos, ypos;

public:
	// 생성자
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
	int radius;		// 반지름의 길이 정보
	Point p;

public:
	// 생성자로 구현 - 원의 중심 좌표 및 반지름의 길이 정보 저장
	Circle(int x, int y, int r) : p(x, y)
	{
		radius = r;
	}

	// 원의 중심 좌표 및 반지름의 길이 정보 저장
	/*void SetCircleInfo(int x, int y, int r)
	{
		p.Init(x, y);
		radius = r;
	}*/
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