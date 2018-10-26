/**
 * Date: 10/26/2018, 18:00
 * Author: Kim92
 * Comment: P.99
 */

//문제 1
//다음 표준함수를 호출하는 예제를 만들되, C++의 헤더를 선언해서 만들어보자. 
//그리고 예제의 내용은 상관없지만, 아래의 함수들을 최소 1회 이상 호출해야 한다.
//참고로 다음 함수들은 C언어의 경우 <string.h>에 선언되어 있다.

#include <iostream>
#include <cstring>	// 문제 1
#include <ctime>	// 문제 2
#include <cstdlib>	// 문제 2
using std::cout;
using std::endl;

int main(void)
{
	// 문제 1
	/*char str[20] = { "melong~~~~~~~~" };
	char strCpy[20];

	cout << strlen(str) << endl;
	cout << strcat(str, "!!") << endl;
	cout << strcpy(strCpy, str) << endl;
	cout << strcmp(str, strCpy) << endl;*/

	// 문제 2
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		cout << rand()%100 << ' ';

	} cout << endl;

	return 0;

}