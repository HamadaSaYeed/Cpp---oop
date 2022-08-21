// Inheritance ÇáæÑÇËå

#include<iostream>
using namespace std;

class person  // class 1
{


private:

	int age;
	string name;
	int id;


public:

	void set_value(int age, string name, int id)
	{
	
		this->age = age;
		this->name = name;
		this->id = id;

	}

	void get_value()
	{
		cout << "age = " << age << endl;
		cout << "name = " << name << endl;
		cout << "id = " << id << endl;
	}


};


// person æÑË ßá ÍÇÌå ãæÌæÏå 
class Student : public person  // Inheritance ÇáæÑÇËå

{

private:

	int Gpa;

public:

	void set_Gpa(int Gpa)
	{
		this->Gpa = Gpa;
	}

	void get_Gpa()
	{
		cout << "Gpa = " << Gpa << endl;
	}

	
};


int main()
{

	// class æÑËå Çá <==< person
	// object 
	Student op1;

	op1.set_value(18, "Hamada", 621224);
	op1.get_value();
	op1.set_Gpa(3.8);
	op1.get_Gpa();


	cout << "-------------" << endl;

	person op2;

	op2.set_value(52, "Sayed", 192257);
	op2.get_value();
	

	return 0;


}
