#include <iostream>
#include <cstring>
using std::cout; using std::endl;

class Gun
{
private:
	int bullet;		// ������ �Ѿ��� ��

public:
	Gun() {}

	Gun(int bnum) : bullet(bnum) {}

	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}
};

class Police : public Gun
{
private:
	int handcuffs;		// ������ ������ ��
	Gun * pistol;		// �����ϰ� �ִ� ����

public:
	Police(int bnum, int bcuff) : handcuffs(bcuff)
	{
		if (bnum > 0)
			pistol = new Gun(bnum);
		else
			pistol = NULL;
	}

	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}

	void Shot()
	{
		if (pistol == NULL)
			cout << "Hut BBANG!" << endl;
		else
			pistol->Shot();
	}

	~Police()
	{
		delete[] pistol;
	}
};

int main(void)
{
	Police pman1(5, 3);
	pman1.Shot();
	pman1.PutHandcuff();

	Police pman2(0, 3);		// ������ �������� ���� ����
	pman2.Shot();
	pman2.PutHandcuff();

	return 0;
}