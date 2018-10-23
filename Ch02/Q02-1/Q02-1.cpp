/**
 * Date: 10/23/2018, 15:56
 * Author: Kim92
 * Comment: P.80 _ 참조가 기반의 Call-by-reference 구현
 */

#include <iostream>
using std::cout;
using std::endl;


// 문제1: 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
void Adder(int &num)
{
	num++;
}

// 문제1: 인자로 전달된 int형 변수의 부호를 바꾸는 함수
void AbsoluteNum(int &num)
{
	num *= -1;
}

// 문제3: ptr1과 ptr2가 가르키는 대상이 서로 바뀌도록 함수 구현
void SwapPointer(int *(&ptr1), int *(&ptr2))
{
	int * temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}


int main(void)
{

	// 문제 1
	// 참조자를 이용해서 다음 요구사항에 부합하는 함수를 각각 정의하여라.
	// - 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
	// - 인자로 전달된 int형 변수의 부호를 바꾸는 함수
	// 그리고 위의 각 함수를 호출하여 그 결과를 확인하는 main 함수를 작성하여라.
	int num = -1;
	cout << "원래 num의 값: " << num << endl;
	Adder(num);
	cout << "1씩 증가:" << num << endl;
	AbsoluteNum(num);
	cout << "절댓값 변환: " << num << endl;


	// 문제2
	// 앞서 소개한 예제 RefSwap.cpp의 SwapByRef2 함수를 다음의 형태로 호출하면 컴파일 에러가 발생한다.
	// SwapByRef2(23, 45);
	// 컴파일 에러가 발생하는 이유는 무엇인가?
	// 답: 참조자는 상수에는 쓸 수 없다.

	
	// 문제3
	// 문제의 제시에 앞서 먼저 다음 코드를 보자.
	/*int main(void)
	{
		int num1 = 5;
		int *ptr1 = &num1;
		int num2 = 10;
		int *ptr2 = &num2;
		. . . .
	}*/
	// 위의 코드를 보면 ptr1과 ptr2가 각각 num1과 num2를 가리키고 있다.
	// 이 때 ptr1과 ptr2를 대상으로 다음과 같이 함수를 호출하고 나면,
	// SwapPointer(ptr1, ptr2);
	// ptr1과 ptr2가 가리키는 대상이 서로 바뀌도록 SwapPointer 함수를 정의해보자.

	int num1 = 5;
	int *ptr1 = &num1;

	int num2 = 10;
	int *ptr2 = &num2;
	
	cout << *ptr1 << " " << *ptr2 << endl;
	SwapPointer(ptr1, ptr2);
	cout << *ptr1 << " " << *ptr2 << endl;

	return 0;
}