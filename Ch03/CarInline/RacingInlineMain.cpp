/**
 * Date: 10/30/2018, 17:42
 * Author: Kim92
 * Comment: 인라인 함수의 예제(메인)
 */

#include "CarInline.h"

int main(void)
{
	Car run99;
	run99.InitMembers((char*)"run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}