/**
 * Date: 10/31/2018, 17:11
 * Author: Kim92
 * Comment: 사과장수 시뮬레이션
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

	void ShowSaleResult()
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
		cout << "현재 잔액: " << myMoney << endl;
		cout << "판매 수익: " << numOfApples << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);	// 과일 구매!

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSaleResult();
	cout << endl;
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}