# include <iostream>
using namespace std;

class student
{
private: //  ãÚäÇåÇ ÎÇÕ

	string name ;
	int age = 18 ;
	int grad ;



public: // ãÚäÇåÇ ÚÇã

	int first_age() // ÏÇáå
	{
		return age ; 

	}


};


	int main()
	{

		student op;
		
		cout << op.first_age() << endl;


	}
