# include <iostream>
using namespace std;
class first
{

private :
	int x = 1;


public :
	int y = 2;


protected :
	int z = 3;


};

class second : public first 
{
public:

	/*

	void print_x() // private
	{
		cout << " x is : " << x << endl; // error
	}


	*/



	void print_y() // public
	{
		cout << " y is : " << y << endl; //  y is : 2
		
	}


	void print_z() // protected
	{
		cout << " z is : " << z << endl; // z is : 3
	}


};

int main()
{

	second op1;

	 // op1.print_x(); // private == > error
	op1.print_y();
	op1.print_z();



}