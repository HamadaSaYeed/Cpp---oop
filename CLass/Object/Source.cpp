# include <iostream>
using namespace std;

class student
{
private: //  ������ ���

	string name ;
	int age = 18 ;
	int grad ;



public: // ������ ���

	int first_age() // ����
	{
		return age ; 

	}


};


	int main()
	{

		student op;
		
		cout << op.first_age() << endl;


	}
