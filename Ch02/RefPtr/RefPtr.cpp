/**
 * Date: 10/20/2018, 15:06
 * Author: Kim92
 * Comment: 포인터 변수도 변수이기 떄문에 참조자의 선언이 가능!
 */

#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	int num = 12;
	int *ptr = &num;
	int **dptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;
	int **(&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	return 0;
}