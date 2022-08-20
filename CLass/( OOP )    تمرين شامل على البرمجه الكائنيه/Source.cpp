#include <iostream>
using namespace std;
class Student

{
private:

	string name;

	int mark;

public:



	Student(string n , int m)   // pararmetrized constructor

	{
		name = n; 

		mark = m;
	}



	Student()  // default constructor

	{
		cout << "enter a name : ";
		cin >> name;

		cout << "enter a mark : ";
		cin >> mark;

	}

	 // Destuctor
	~ Student(){} 


	 // friend function
	friend void sum(Student op1, Student op2, Student op3);
	


	 // function 
	void checkmarks(Student op1, Student op2, Student op3)

	{
		if (op1.mark > op2.mark && op1.mark > op3.mark)
		{
			cout << op1.name << "congratulation your are thr first " << endl;
		}


		else if (op2.mark > op1.mark && op2.mark > op3.mark)
		{
			cout << op2.name << "congratulation your are thr first " << endl;
		}


		else if (op3.mark > op1.mark && op3.mark > op2.mark)
		{
			cout << op3.name << "congratulation your are thr first " << endl;
		}

	}
};


// friend function
void sum(Student op1, Student op2, Student op3)

{

	int sum = op1.mark + op2.mark + op3.mark;

	cout << "the sum op the marks = " << sum << endl;

}

int main()

{
	// thre object 

	Student op1(" Hamada ", 90);

	Student op2(" Ali ", 50);

	Student op3(" Nour ", 75);


	// call friend function
	sum(op1, op2, op3);


	// call function 
	op1.checkmarks(op1, op2, op3);

	return 0;

}