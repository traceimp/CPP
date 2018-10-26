/**
 * Date: 10/26/2018, 15:59
 * Author: Kim92
 * Comment: P.95
 */

/**
2���� ���󿡼� ��ǥ�� ǥ���� �� �ִ� ����ü�� ������ ���� �����Ͽ���.
	 typedef struct __Point
	 {
		int xpos;
		int ypos;
	 } Point;
���� ����ü�� ������� �� ���� ���� ����ϴ� �Լ��� ������ ���·� �����ϰ�(��������� �Լ��� ��ȯ�� ���ؼ� ��� �Ѵ�.)
	Point& PntAdder(const Point &p1, const Point &2);

������ �� ���� �����Ͽ�, �� �Լ��� �̿��� ���� ������ �����ϴ� main �Լ��� �����غ���.
��, ����ü Point ���� ������ ������ ������ new �����ڸ� �̿��ؼ� �����ؾ� �ϸ�,
�Ҵ�� �޸� ������ �Ҹ굵 ö���ؾ� �Ѵ�. ����� �� ������ �ذ��� ���ؼ��� ���� �� ������ ���� �� �־�� �Ѵ�.

	* �����Ҵ� �� ������ �Լ��� ������ �Ű������� ���ڷ� ��� �����ؾ� �ϴ°�?
	* �Լ� ���� ����� ������ ���������� ��ȯ�Ϸ��� �ش� ������ ��� �����ؾ� �ϴ°�?
*/

#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point* sum = new Point;

	sum->xpos = p1.xpos + p2.xpos;
	sum->ypos = p1.ypos + p2.ypos;

	return *sum;
}

int main(void)
{
	Point* pt1 = new Point;
	pt1->xpos = 10;
	pt1->ypos = 30;

	Point* pt2 = new Point;
	pt2->xpos = 50;
	pt2->ypos = 20;

	Point& result = PntAdder(*pt1, *pt2);
	cout << "xpos���� ��: " << result.xpos << endl;
	cout << "ypos���� ��: " << result.ypos << endl;

	delete pt1;
	delete pt2;
	delete &result;

	return 0;
}