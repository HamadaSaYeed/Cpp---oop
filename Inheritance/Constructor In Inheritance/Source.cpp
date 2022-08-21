# include <iostream>
using namespace std;

// Constructor In Inheritance
class First
{

private:

	int x;

public:

	First() // Constructor
	{

		cout << "hi i am Constructor of First class\n";
	}

	



};


class Second : public First  // Inheritance
{

private:

	int z;

public:

	Second() // Constructor
	{
		cout << "thes is Constructor of Second class\n";
	}




};


int main()
{
	// object 
	Second op2; // Second  ãä Constructor ÈÚÏåÇ íÑÌÚ Þíãå  first åíæÑË ãä 

	return 0;

}