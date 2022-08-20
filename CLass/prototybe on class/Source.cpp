# include <iostream>

using namespace std;

// ÏÑÌÇÊ ØáÇÈ 


class Grade

{

public :

	int num1;
	

	void print(); // member function


};


void Grade::print() // prototype function on class

{
	if (num1 >= 50 && num1 <= 65)
	{
		cout << "D" << endl;
	}


	else if (num1 >= 65 && num1 <= 75)
	{

		cout << "B" << endl;

	}


	else if (num1 >= 75 && num1 <= 85)
	{

		cout << "A" << endl;

	}

	else if (num1 >= 85 && num1 <= 100)
	{

		cout << "A+" << endl;

	}

	else

	{

		cout << "f-" << endl;
	}

}

int main()
{


	Grade student1;

	Grade student2;

	student1.num1;

	cout << "entre the degree : " << endl;

	cin >> student1.num1;

	 student1.print();


	 return 0;

}

