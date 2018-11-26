#include <iostream>
using std::cout; using std::endl;

class MyFriendInfo
{
private:
	char * name;
	int age;

public:
	MyFriendInfo(const char * myname, int myage) : age(myage)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}

	void ShowMyFriendInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	
	~MyFriendInfo()
	{
		delete[] name;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char * addr;
	char * phone;

public:
	MyFriendDetailInfo(const char * myname, int myage, const char * myaddr, const char * myphone) : MyFriendInfo(myname, myage)
	{
		addr = new char[strlen(myaddr) + 1];
		strcpy(addr, myaddr);

		phone = new char[strlen(myphone) + 1];
		strcpy(phone, myphone);
	}

	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "�ּ�: " << addr << endl;
		cout << "��ȭ: " << phone << endl << endl;
	}

	~MyFriendDetailInfo()
	{
		delete[] addr;
		delete[] phone;
	}
};

int main(void)
{
	MyFriendDetailInfo mf("KIM", 30, "DO SI DONG", "010-111-2222");
	mf.ShowMyFriendDetailInfo();
	//cout << "------------------------" << endl;
	//mf.ShowMyFriendInfo();

	return 0;
}