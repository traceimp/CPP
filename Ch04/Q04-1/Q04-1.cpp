/**
 * Date: 11/13/2018, 12:53
 * Author: Kim92
 * Comment: 사과장수 시뮬레이션 => 사과의 구매 목적으로 0보다 작은 수를 전달할 수 없다. 조건추가!
 */

#include <iostream>
using std::cout;
using std::endl;

class FruitSeller
{
private:
	int APPLE_PRICE;	// 사과 가격
	int numOfApples;	// 보유한 사과 갯수
	int myMoney;		// 보유한 돈

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
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl;
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
		cout << "현재 잔액: " << myMoney << endl;
		cout << "판매 수익: " << numOfApples << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	//buyer.InitMembers(0);
	//buyer.BuyApples(seller, 2000);	// 과일 구매!

	if (!buyer.InitMembers(5000))
		cout << "돈이 부족합니다." << endl;
	else
	{
		if (!buyer.BuyApples(seller, 3000))
		{
			cout << "돈이 부족하여 판매할 수 없습니다." << endl;
		}
		else
		{
			cout << "과일 판매자의 현황" << endl;
			seller.ShowSaleResult();
			cout << endl;
			cout << "과일 구매자의 현황" << endl;
			buyer.ShowBuyResult();
		}
		
	}

	return 0;
}