/**
 * Date: 10/26/2018, 17:54
 * Author: Kim92
 * Comment: C의 라이브러리를 C++에서 사용하는 예제 1
 */

#include <iostream>
#include <cstdio>
#include <cstring>
using std::cout;
using std::endl;

int main(void)
{
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);

	printf("%s: %f\n", str1, sin(0.14));
	printf("%s: %f\n", str2, abs(-1.25));

	return 0;
}