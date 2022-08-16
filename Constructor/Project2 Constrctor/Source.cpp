#include <iostream>
using namespace std;
class Cal
{
private:

	int n1;
	int n2;

public:

	Cal()  // default constructor
			
	{
		cout << "enter a n1 : ";
		cin >> n1;


		cout << "enter a n2 : ";
		cin >> n2;

	}

	Cal (int x, int y) // parameterized  constructor
	{
		n1 = x;
	    n2 = y;
	
	}

	~ Cal () { cout << "-------"; } //	Destuctor  <==> ãÓÆæá Úä ÊİÑíÛ ÇáãÓÇÍå 


	int sum()
	{

		return n1 + n2;

	}
	float divide()
	{

		return float (n1) / float (n2);  // casting 

	}
	int  mode()
	{

		return n1 % n2;

	}
	int  mult()
	{

		return n1 * n2;

	}
};

int main()
{

	// call  <==>  default constructor
	     
	Cal op1;
	cout << op1.sum() << endl;
	cout << op1.divide() << endl;
	cout << op1.mode() << endl;
	cout << op1.mult() << endl;


	// call  <==>   parameterized  constructor
	
	Cal op2(1,2);
	cout << op2.sum() << endl;
	cout << op2.divide() << endl;
	cout << op2.mode() << endl;
	cout << op2.mult() << endl;

	return 0;
}