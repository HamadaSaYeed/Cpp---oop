
// Inheritance íÓÊŞÈá ãÚÇãá  ãÚ construster

#include <iostream>
using namespace std;

class A
{
private:

	string name;

public:

	A(string name)
	{
		this->name = name;
	}

	void print()
	{
		cout << name << " hi from class A" << endl;
	}
};

class B : public A
{
private:

	int age;

public:

	B(int age , string name) : A(name) //  (-'A'-) áÇÒã ÇÍØ Şíãå ÇáßäÓÊÑÇßÊæÑ Çáì åæÑË ãäå 
	{
		this->age = age;
	}

	void print()
	{
		A::print(); // override function

		cout << age << " hi from class B" << endl;
	}
};

int main()
{
	B op(12,"hamada");

	op.print(); 
}