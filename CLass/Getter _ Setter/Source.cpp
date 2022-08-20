#include <iostream>
using namespace std;
class Company {

private:

	int salary1;
	int salary2;

public:

	void add() {

		cout << "sum = " << salary1 + salary2 << endl;
	
	}
	
	void show(int x , int y)
	
	{
		salary1 = x;
		salary2 = y;
		

	}
};

int main() {

	Company op;
	
	


	int x;
	int y;

	cout << "enter a salary1 :  ";

	cin >> x;

	cout << "enter a salary2 :  ";

	cin >> y;


	op.show(x,y);
	op.add();


}