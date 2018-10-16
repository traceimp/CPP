#include <iostream>

int main(void)
{
	// C++에서는 데이터의 입력도 데이터의 출력과 마찬가지로
	// 별도의 포맷 지정이 필요없다.

	//int val1;
	double val1;
	std::cout << "첫번째 숫자입력: ";
	std::cin >> val1;

	//int val2;
	double val2;
	std::cout << "두번째 숫자입력: ";
	std::cin >> val2;

	//int result = val1 + val2;
	double result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;

	return 0;
}