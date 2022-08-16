# include <iostream>
# include <string>
using namespace std;
class Student
{
	int x;
	int y;
	char op;
	int selt;
public:

	Student()  // Constructor
	{
		x = 8;
		y = 3;
		op = '+';
		selt = x + y;
	}



	//  Constructor <== ØÑíÞå ÇÎÑí áÚãá  
	
	
	/*
	
	
	Student() : x(8) , y (3) , op ('+') , selt (x + y)
	{}
	
	
	*/
	
	
	
	
	// function on class

	void show()
	{

		cout << x << "  " << op << "  " << y <<"  =  " << selt << endl;

	}

	void get_x(int a) {

		x = a;
		cout << x << endl;
	} 

	void get_y(int a) {

		y = a;
		cout << y << endl;
	}

};

int main ()
{
	

	Student op;

	op.show();  // calling Constructor

	op.get_x(5);  

	op.get_y(30);

	return 0;
}