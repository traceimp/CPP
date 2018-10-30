/**
 * Date: 10/30/2018, 18:42
 * Author: Kim92
 * Comment: P.135~136 ¹®Á¦2
 */

#include "Printer.h"

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello World!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}