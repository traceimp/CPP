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

	// ���� ������ �߰�
	NameCard(const NameCard &nc) : rank(nc.rank)
	{
		name = new char[strlen(nc.name) + 1];
		strcpy(name, nc.name);

		corporateName = new char[strlen(nc.corporateName) + 1];
		strcpy(corporateName, nc.corporateName);

		tel = new char[strlen(nc.tel) + 1];
		strcpy(tel, nc.tel);
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
	NameCard copy1 = manClerk;

	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;

	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();

	return 0;
}