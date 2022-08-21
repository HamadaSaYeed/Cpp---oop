#include <iostream>
using namespace std;

class A
{
public:

	void print()   // Function that uses the same name -- > ѕ«бе  ” ќѕг дЁ” «б≈”г
	{
		cout << "Function from class (A)" << endl;
	}

};

class B : public A
{
public:

	void print()   // Function that uses the same name -- > ѕ«бе  ” ќѕг дЁ” «б≈”г
	{
		cout << "Function from class (B)" << endl;
	}

};


int main()
{
	B op;

	//  енЎ»Џ Џбн Ќ”» «б«жбжне
	op.print();  // Function from class (B)  < --  «б«жбжне 


	// ед« «д« »Ќѕѕ
	op.A::print();  // Function from class (A) < --   (A)  class  ѕ«ќб  print()  гЏд«е« «” ѕЏм 


	return 0;
}