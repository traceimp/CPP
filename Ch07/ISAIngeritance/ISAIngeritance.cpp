#include <iostream>
#include <cstring>
using std::cout; using std::endl;

class Computer
{
private:
	char owner[50];

public:
	Computer(const char * name)
	{
		strcpy(owner, name);
	}

	void Calculate()
	{
		cout << "��û ������ ����մϴ�." << endl;
	}
};

class NotebookComp : public Computer
{
private:
	int Battery;

public:
	NotebookComp(const char * name, int iniChag) : Computer(name), Battery(iniChag) { }

	void Charging() { Battery += 5;  }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "���� �ʿ�!!!" << endl;
			return;
		}

		cout << "�̵��ϸ鼭 ";
		Calculate();
		UseBattery();
	}

	int GetBatteryInfo() { return Battery; }

};

class TabletNoteBook : public NotebookComp
{
private:
	char regstPenModel[50];

public:
	TabletNoteBook(const char * name, int initChag, const char * pen)
		: NotebookComp(name, initChag)
	{
		strcpy(regstPenModel, pen);
	}

	void Write(const char * penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "���� �ʿ�!!!" << endl;
			return;
		}

		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << " : ��ϵ� ���� �ƴմϴ�." << endl;
			return;
		}

		cout << "�ʱ� ������ ó���մϴ�." << endl;
		UseBattery();
	}
};

int main(void)
{
	NotebookComp nc("�̼���", 5);
	TabletNoteBook tn("������", 5, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");

	return 0;
}