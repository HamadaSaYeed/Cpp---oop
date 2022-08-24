# include <iostream>
using namespace std;

class Rect {

private :

	float hight;
	float width;

public :

	int print1()
	{
		return hight;
	}

	void sethight(float a) // ÇäÔÇäå ãíÊÑÌÚÔ Þíãå  
	{

		

		if (a > 0) {
			hight = a; 
		}
		else
		{

			cout << "enter a number positive" << endl;

	    }


	}


	int print2()
	{
		return width;
	}
	int aera()
	{
		return hight * width;
	}


};



int main()
{

	Rect opo;

	 opo.sethight(5);

	return 0;
}