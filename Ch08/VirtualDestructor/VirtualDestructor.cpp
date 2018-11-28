#include <iostream>
using std::cout; using std::endl;

class First
{
private:
	const char * strOne;

public:
	First(const char * str)
	{
		strOne = new char[strlen(str) + 1];
	}

	virtual ~First()
	{
		cout << "~First()" << endl;
		delete[] strOne;
	}
};

class Second : public First
{
private:
	const char * strTwo;

public:
	Second(const char * str1, const char * str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}

	virtual ~Second()
	{
		cout << "~Second()" << endl;
		delete[] strTwo;
	}
};

class Third : public Second
{
private:
	const char * strThree;

public:
	Third(const char * str1, const char * str2, const char * str3) : Second(str1, str2)
	{
		strThree = new char[strlen(str2) + 1];
	}

	virtual ~Third()
	{
		cout << "~Third()" << endl;
		delete[] strThree;
	}
};

int main(void)
{
	First * ptr = new Third("simple", "complex", "text");
	delete ptr;

	return 0;
}