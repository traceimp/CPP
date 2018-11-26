#include <iostream>
#include <cstring>
using std::cout; using std::endl;

class Book
{
private:
	char * title;	// å ����
	char * isbn;	// ����ǥ�ص�����ȣ
	int price;		// å�� ����

public:
	Book() {}

	Book(const char * title, const char * isbn, int bPrice)
		: price(bPrice)
	{
		this->title = new char[strlen(title) + 1];
		strcpy(this->title, title);

		this->isbn = new char[strlen(isbn) + 1];
		strcpy(this->isbn, isbn);

	}

	void ShowBookInfo()
	{
		cout << "����: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "����: " << price << endl;
	}

	~Book()
	{
		delete[] title;
		delete[] isbn;
	}
};

class EBook : public Book
{
private:
	char * DRMKey;	// ���Ȱ��� Ű

public:
	EBook(const char * title, const char * isbn, int price, const char * DRMKey) : Book(title, isbn, price)
	{
		this->DRMKey = new char[strlen(DRMKey) + 1];
		strcpy(this->DRMKey, DRMKey);
	}

	void ShowBookInfo()
	{
		Book::ShowBookInfo();
		cout << "����Ű: " << DRMKey << endl;
	}

	~EBook()
	{
		delete[] DRMKey;
	}
};

int main(void)
{
	Book book("���� C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	
	cout << endl;

	EBook ebook("���� C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowBookInfo();

	return 0;
}