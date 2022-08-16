# include <iostream>
using namespace	 std;
class Text
{
private:


	int x;
	int y;
	char op;
	int res;


public:

	Text(): x (8) , y (12) , op ('+') , res (x + y) {}  // Constructor 


	void show()
	{


		cout << x << " + " << y << " = " << x + y << endl;

	}


	~Text(){}  // Destructor

};

int main()
{

	Text op;

	op.show();



}