/**
 * Date: 10/26/2018, 15:59
 * Author: Kim92
 * Comment: P.95
 */

/**
2차원 평면상에서 좌표를 표현할 수 있는 구조체를 다음과 같이 정의하였다.
	 typedef struct __Point
	 {
		int xpos;
		int ypos;
	 } Point;
위의 구조체를 기반으로 두 점의 합을 계산하는 함수를 다음의 형태로 정의하고(덧셈결과는 함수의 반환을 통해서 얻게 한다.)
	Point& PntAdder(const Point &p1, const Point &2);

임의의 두 점을 선언하여, 위 함수를 이용한 덧셈 연산을 진행하는 main 함수를 정의해보다.
단, 구조체 Point 관련 변수의 선언은 무조건 new 연산자를 이용해서 진행해야 하며,
할당된 메모리 공간의 소멸도 철저해야 한다. 참고로 이 문제의 해결을 위해서는 다음 두 질문에 답할 수 있어야 한다.

	* 동적할당 한 변수를 함수의 참조형 매개변수의 인자로 어떻게 전달해야 하는가?
	* 함수 내에 선언된 변수를 참조형으로 반환하려면 해당 변수는 어떻게 선언해야 하는가?
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
	cout << "xpos들의 합: " << result.xpos << endl;
	cout << "ypos들의 합: " << result.ypos << endl;

	delete pt1;
	delete pt2;
	delete &result;

	return 0;
}