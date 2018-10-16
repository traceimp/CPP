#include <iostream>
// C++에선 표준 라이브러리(개발자 개발한 헤더 파일이 아닌) 확장자는 .h이나 생략 가능

int main(void)
{
	int num = 20;
	// std::cout 와 <<를 통한 출력
	std::cout << "Hello World!" << std::endl;	// << std::endl는 개행을 의미
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0;
}