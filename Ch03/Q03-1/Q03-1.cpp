/**
 * Date: 10/30/2018, 19:05
 * Author: Kim92
 * Comment: P.114 / �������� �ٽ� ����
 */

#include <iostream>
using std::cout;
using std::endl;

struct Point
{
	int xpos;
	int ypos;

	void MovePos(int x, int y)	// ���� ��ǥ�̵�
	{
		xpos += x;
		ypos += y;
	}

	void AddPoint(const Point &pos)	// ���� ��ǥ����
	{
		xpos += pos.xpos;
		ypos += pos.ypos;
	}

	void ShowPosition()		// ���� x, y ��ǥ���� ���
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};



int main(void)
{
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();	// [5, 14] ���

	pos1.AddPoint(pos2);
	pos1.ShowPosition();	// [25, 44] ���

	return 0;
}