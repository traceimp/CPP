/**
 * Date: 10/31/2018, 17:11
 * Author: Kim92
 * Comment: ������ �ùķ��̼�
 */

#include <iostream>
using std::cout;
using std::endl;

class FruitSeller
{
private:
	int APPLE_PRICE;	// ��� ����
	int numOfApples;	// ������ ��� ����
	int myMoney;		// ������ ��

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSaleResult()
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl;
	}
};

class FruitBuyer
{
	int myMoney;		// private
	int numOfApples;	// private

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller &seller, int money)
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "�Ǹ� ����: " << numOfApples << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);	// ���� ����!

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSaleResult();
	cout << endl;
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}