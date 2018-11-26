#include <iostream>
using std::cout; using std::endl;

class Car	// �⺻ ���� �ڵ���
{
private:
	int gasolineGauge;

public:
	Car(int n) : gasolineGauge(n) {}

	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car	// ���̺긮�� �ڵ���
{
private:
	int electricGaugel;

public:
	HybridCar(int gas, int elec) : Car(gas), electricGaugel(elec) {}

	int GetElecGauge()
	{
		return electricGaugel;
	}
};

class HybridWaterCar : public HybridCar	// ���̺긮�� ����ī
{
private:
	int waterGauge;

public:
	HybridWaterCar(int gas, int elec, int water) : HybridCar(gas, elec), waterGauge(water) {} 

	void ShowCurrentGauge()
	{
		cout << "�ܿ� ���ָ�: " << GetGasGauge() << endl;
		cout << "�ܿ� ���ⷮ: " << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;
	}
};

int main(void)
{
	HybridWaterCar car(10, 20, 30);
	car.ShowCurrentGauge();
	
	return 0;
}