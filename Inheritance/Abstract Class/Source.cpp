#include<iostream>
using namespace std;

class Base
{
	int x;
public:
	virtual void fun() = 0; // ÏÇáå ßá ãÇ ÏÇÎáåÇ ãáæÔ Şíãå
	int getX()
	{
		return x;
	}
};

// This class inherits from Base and implements fun()
class Derived : public Base
{
	int y;
public:
	void fun()
	{ 
		cout << "fun() called";
	}
};

int main(void)
{
	Derived d;
	d.fun();
	// Base op; = error --> ãíäİÚÔ ÇÎÏ ãäå ÇæÈÌíßÊ
	return 0;
}
