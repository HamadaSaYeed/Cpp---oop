# include <iostream>
using namespace std;

// Constructor In Inheritance
class First
{

private:

	int x;

public:

	First(int a) // Parameterized Constructor in Inheritance
	{
		x = a;
		cout << "hi i am Constructor of First class\n";
	}





};


class Second : public First  // Inheritance
{

private:

	int z;

public:



	// åäÇ ßæä ÇÓÊÑÇßÊæÑ åíÇÎÏ ÞíãÊíä 
	Second(int a , int b) : First(a) // Parameterized Constructor in Inheritance
	
	{
		z = b;
		cout << "thes is Constructor of Second class\n";
	}




};


int main()
{
	// object 
	First op1(55);
	Second op2(55,45); // Second  ãä Constructor ÈÚÏåÇ íÑÌÚ Þíãå  first åíæÑË ãä 

	return 0;

}