/**
 * Date: 11/13/2018, 12:53
 * Author: Kim92
 * Comment: ������ �ùķ��̼� => ����� ���� �������� 0���� ���� ���� ������ �� ����. �����߰�!
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

	void ShowSaleResult() const
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
	bool InitMembers(const int money)
	{
		if (money == 0)
			return false;
		else 
		{
			myMoney = money;
			numOfApples = 0;
			return true;
		}
	}

	bool BuyApples(FruitSeller &seller, const int money)
	{
		if (money == 0)
		{
			return false;
		}
		else
		{
			numOfApples += seller.SaleApples(money);
			myMoney -= money;
			return true;
		}
	}

	void ShowBuyResult() const
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
	//buyer.InitMembers(0);
	//buyer.BuyApples(seller, 2000);	// ���� ����!

	if (!buyer.InitMembers(5000))
		cout << "���� �����մϴ�." << endl;
	else
	{
		if (!buyer.BuyApples(seller, 3000))
		{
			cout << "���� �����Ͽ� �Ǹ��� �� �����ϴ�." << endl;
		}
		else
		{
			cout << "���� �Ǹ����� ��Ȳ" << endl;
			seller.ShowSaleResult();
			cout << endl;
			cout << "���� �������� ��Ȳ" << endl;
			buyer.ShowBuyResult();
		}
		
	}

	return 0;
}