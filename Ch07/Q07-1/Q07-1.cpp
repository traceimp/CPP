#include <iostream>
using std::cout; using std::endl;

class Car	// 기본 연료 자동차
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

class HybridCar : public Car	// 하이브리드 자동차
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

class HybridWaterCar : public HybridCar	// 하이브리드 워터카
{
private:
	int waterGauge;

public:
	HybridWaterCar(int gas, int elec, int water) : HybridCar(gas, elec), waterGauge(water) {} 

	void ShowCurrentGauge()
	{
		cout << "잔여 가솔린: " << GetGasGauge() << endl;
		cout << "잔여 전기량: " << GetElecGauge() << endl;
		cout << "잔여 워터량: " << waterGauge << endl;
	}
};

int main(void)
{
	HybridWaterCar car(10, 20, 30);
	car.ShowCurrentGauge();
	
	return 0;
}