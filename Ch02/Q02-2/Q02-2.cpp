/**
 * Date: 10/23/2018, 17:34
 * Author: Kim92
 * Comment: P90 _ const 포인터에 대한 복습을 겸할 수 있는 문제를 제시하겠다. 다음의 상수선언을 보자.
				  const int num=12;
				  포인터 변수를 선언해서 위 변수를 가리키게 해보자. 그리고 이 포인터 변수를 참조하는 참조자를 하나 선언하자.
				  마지막으로 이렇게 선언된 포인터 변수와 참조자를 이용해서 num에 저장된 값을 출력하는 예제를 완성해보자.
 */

#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	const int num = 12;
	const int *ptr = &num;
	const int *(&ref) = ptr;

	cout << "num: " << num << endl;
	cout << "*ptr: " << *ptr << endl;
	cout << "*ref: " << *ref << endl;

	return 0;
}