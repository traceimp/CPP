#include <iostream>
using std::cout;
using std::endl;

class SoSimple
{
public:
	static int simObjCnt;

public:	// ���ʿ������� ������ �Լ��� ������ �������� �����ϱ⵵ ��
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt=0;	// �޸� ������ �Ҵ�� �� �ʱ�ȭ �ض�

int main(void)
{
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	
	SoSimple sim1;
	SoSimple sim2;
	
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;

	return 0;
}