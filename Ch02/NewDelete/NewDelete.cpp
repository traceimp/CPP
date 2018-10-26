/**
 * Date: 10/26/2018, 15:47
 * Author: Kim92
 * Comment: new와 delete 사용 예
 */

#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

char * MakeStrAder(int len)
{
	// char * str = (char*)malloc(sizeof(char)*len);
	char * str = new char[len];
	return str;
}

int main(void)
{
	char * str = MakeStrAder(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	// free(str);
	delete[] str;
	return 0;
}