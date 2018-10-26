/**
 * Date: 10/26/2018, 15:36
 * Author: Kim92
 * Comment: malloc & free를 대신하는 new & delete 1
 */

#include <iostream>
#include <string.h>	// C++에서 C언어의 헤더파일을 추가하는 것도 가능!
#include <stdlib.h>
using std::cout;
using std::endl;

char * MakeStrAdr(int len)	// 길이 정보를 인자로 받아서
{
	char * str = (char*)malloc(sizeof(char)*len);	// 문자열 저장을 위한 배열을 힙 영역에 할당하고 있다.
	return str;	// 그 주소값을 반환
}

int main(void)
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);

	return 0;
}