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
	Person * parr[3];		// 포인터 배열 생성 (객체의 주소값 3개를 저장할 수 있는 배열)
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		parr[i] = new Person(namestr, age);		// 객체 생성 후 객체의 주소값을 배열에 저장하고 있다.
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();

	// 총 3회에 걸쳐 delete 연산을 진행해야 한다.
	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
}