/**
 * Date: 10/30/2018, 17:05
 * Author: Kim92
 * Comment: 레이싱 게임 메인함수
 */

#include "Car.h"

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