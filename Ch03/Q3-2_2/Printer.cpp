#include <iostream>
#include "Printer.h"
using std::cout;
using std::endl;

void Printer::SetString(const char * text)
{
	str = text;
}

void Printer::ShowString()
{
	cout << str << endl;
}
