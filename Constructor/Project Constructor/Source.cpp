# include <iostream>
using namespace std;
class Test
{
private :
	int a;
	int b;
public:
	Test()  // constructor
	{
		a = 5 ;
		b = 7;


	}
	void sit()
	{
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;

	}


};

int main()
{

	Test op1;

	op1.sit();




}