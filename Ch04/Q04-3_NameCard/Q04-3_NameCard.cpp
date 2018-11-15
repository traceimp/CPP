#include <iostream>
using std::cout;
using std::endl;

namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;;
			break;
		}
	}
}



class NameCard
{
private:
	char * name;			// �̸�
	char * corporateName;	// ȸ���
	char * tel;				// ��ȭ��ȣ
	int rank;				// ����


public:
	NameCard(const char * myName, const char * myCor, const char * myTel, const int myRank)
		: rank(myRank)
	{
		name = new char[strlen(myName) + 1];
		strcpy(name, myName);

		corporateName = new char[strlen(myCor) + 1];
		strcpy(corporateName, myCor);

		tel = new char[strlen(myTel) + 1];
		strcpy(tel, myTel);

	}

	void ShowNameCardInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << corporateName << endl;
		cout << "��ȭ��ȣ: " << tel << endl;
		cout << "����: ";  COMP_POS::ShowPositionInfo(rank);
		cout << endl;
	}

	~NameCard()
	{
		delete[] name;
		delete[] corporateName;
		delete[] tel;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	
	return 0;
}