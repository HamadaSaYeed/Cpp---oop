# include <iostream>
using namespace std;

// ����� ==> constructor & function ==> class  ����

class Student
{
private:

	int x;
	int y;

public:

	int sum(); // function 


	Student(); // constuctor 



};

Student::Student()   // constuctor 

{
	cout << "enter a value x :";
	cin >> x;

	cout << "enter a valu y : ";
	cin >> y;

}


int Student ::sum()   // function 

{

	return x + y;

}

int main()
{

	Student op;

	cout << op.sum();
	
	return 0;

}