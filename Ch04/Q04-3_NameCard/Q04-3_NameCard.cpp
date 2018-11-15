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
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;;
			break;
		}
	}
}



class NameCard
{
private:
	char * name;			// 이름
	char * corporateName;	// 회사명
	char * tel;				// 전화번호
	int rank;				// 직급


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
		cout << "이름: " << name << endl;
		cout << "회사: " << corporateName << endl;
		cout << "전화번호: " << tel << endl;
		cout << "직급: ";  COMP_POS::ShowPositionInfo(rank);
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