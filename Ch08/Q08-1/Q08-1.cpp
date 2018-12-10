#include <iostream>
#include <cstring>
using std::cout; using std::endl;

namespace RISK_LEVEL
{
	enum
	{
		RISK_A = 30,
		RISK_B = 20,
		RISK_C = 10
	};
}

class Employee
{
private:
	char name[100];

public:
	Employee(const char * name)
	{
		strcpy(this->name, name);
	}

	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}

	virtual int GetPay() const = 0;				// �߻� Ŭ���� ����

	virtual void ShowSalaryInfo() const = 0;	// �߻� Ŭ���� ����
};

class PermanentWorker : public Employee
{
private:
	int salary;		// �� �޿�

public:
	PermanentWorker(const char * name, int money)
		: Employee(name), salary(money) {}

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;		// �� �޿� ���� �ð��� �հ�
	int payPerHour;		// �ð��� �޿�

public:
	TemporaryWorker(const char * name, int pay)
		:Employee(name), workTime(0), payPerHour(pay)
	{}

	void AddWorkTime(int time)	// ���� �ð� �߰�
	{
		workTime += time;
	}

	int GetPay() const	// �� ���� �޿�
	{
		return workTime * payPerHour;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;	// �� �ǸŽ���
	double bonusRatio;	// �󿩱� ����

public:
	SalesWorker(const char * name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{}

	void AddSalesResult(int value)
	{
		salesResult += value;
	}

	int GetPay() const
	{
		// PermanentWorker�� GetPay �Լ� ȣ��
		return PermanentWorker::GetPay() + (int)(salesResult*bonusRatio);
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl;	// SalesWorker�� GetPay �Լ��� ȣ���
	}
};

class ForeignSalesWoker : public SalesWorker
{
private:
	const int risk;

public:
	ForeignSalesWoker(const char * name, int money, double ratio, int risk)
		: SalesWorker(name, money, ratio), risk(risk)
	{
		// empty!
	}

	int GetRiskPay() const
	{
		return (int)(SalesWorker::GetPay()*(risk / 100.0));
	}

	int GetPay() const
	{
		return SalesWorker::GetPay() + GetRiskPay();
	}	

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << SalesWorker::GetPay() << endl;
		cout << "risk pay: " << GetRiskPay() << endl;
		cout << "sum: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee * empList[50];
	int empNum;

public:
	EmployeeHandler() : empNum(0)
	{}

	void AddEmployee(Employee * emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
	}

	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();

		cout << "salary sum: " << sum << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete[] empList[i];
	}
};

int main(void)
{
	// ���������� �������� ����� ��Ʈ�� Ŭ������ ��ü����
	EmployeeHandler handler;

	// �ؿ� ������ ���
	ForeignSalesWoker * fseller1 = new ForeignSalesWoker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
	fseller1->AddSalesResult(7000);		// �������� 7000
	handler.AddEmployee(fseller1);

	ForeignSalesWoker * fseller2 = new ForeignSalesWoker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->AddSalesResult(7000);		// �������� 7000
	handler.AddEmployee(fseller2);

	ForeignSalesWoker * fseller3 = new ForeignSalesWoker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->AddSalesResult(7000);		// �������� 7000
	handler.AddEmployee(fseller3);

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	return 0;
}