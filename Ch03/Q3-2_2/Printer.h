#ifndef __PRINTER_H__
#define __PRINTER_H__

class Printer
{
private:
	const char * str;
public:
	void SetString(const char * text);
	void ShowString();
};

#endif // !__PRINTER_H__
