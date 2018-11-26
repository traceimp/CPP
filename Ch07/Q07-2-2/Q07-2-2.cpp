#include <iostream>
#include <cstring>
using std::cout; using std::endl;

class Book
{
private:
	char * title;	// 책 제목
	char * isbn;	// 국제표준도서번호
	int price;		// 책의 정가

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
		cout << "제목: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "가격: " << price << endl;
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
	char * DRMKey;	// 보안관련 키

public:
	EBook(const char * title, const char * isbn, int price, const char * DRMKey) : Book(title, isbn, price)
	{
		this->DRMKey = new char[strlen(DRMKey) + 1];
		strcpy(this->DRMKey, DRMKey);
	}

	void ShowBookInfo()
	{
		Book::ShowBookInfo();
		cout << "인증키: " << DRMKey << endl;
	}

	~EBook()
	{
		delete[] DRMKey;
	}
};

int main(void)
{
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	
	cout << endl;

	EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowBookInfo();

	return 0;
}