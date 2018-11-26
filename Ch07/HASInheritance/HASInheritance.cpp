#include <iostream>
#include <cstring>
using std::cout; using std::endl;

class Gun
{
private:
	int bullet;		// ������ �Ѿ��� ��

public:
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

public:
	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff) {}

	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}
};

int main(void)
{
	Police pman(5, 3);		// �Ѿ� 5, ���� 3
	pman.Shot();
	pman.PutHandcuff();

	return 0;
}