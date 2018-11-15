#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;

class Person
{
private:
	char * name;
	int age;

public:
	Person(char * myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person()
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}

	void SetPersonInfo(char * myname, int myage)
	{
		name = myname;
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}

	~Person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person parr[3];		// 객체 배열 생성
	char namestr[100];
	char * strptr;
	int age;
	int len;

	//cout << "객체테스트" << endl;

	// 객체 초기화 과정!
	for (int i = 0; i < 3; i++)
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
	}

	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();

	return 0;
}