# include <iostream>
using namespace std;

//ÇáÔßá Ïå ãÔ ãÍÈæÈ ÚÔÇä ßÏå åäÊÚáã ãİåæã ÇáæÑÇËå class ÚÔÇä ÇÚãá ÇßËÑ ãä 


// class one
class Student
{

private:

	int age1;
	string name1;
	int id1;

public:


	Student(int a, string n, int i) // constructor
	{
		age1 = a;
		name1 = n;
		id1 = i;
	}

	void set(){

		cout << " age = " << age1 << endl;

		cout << " name = " << name1 << endl;

		cout << " id = " << id1 << endl;
	}
};


// class tow
class Teacher
{
private:

	int age2;
	string name2;
	

public:

	Teacher(int a2, string n2)
	{
		age2 = a2;
		name2 = n2;
		
	}

	void get() {

		cout << " age = " << age2 << endl;

		cout << " name = " << name2 << endl;

		
	}
};

int main()
{
	// call Student
	Student oop (18,"hamada",621224);
	oop.set();


	cout << "--------------" << endl;

	// call Teacher
	Teacher oop2(12, "aya");
	oop2.get();

	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
* 
* 
* // Inheritance ÇáæÑÇËå

# include < ioatream >
using namespace std;

class person
{

public:
	int age;
	string name;
	int id;


};

class Student : public person  // Inheritance ÇáæÑÇËå

{

public:

	int Gpa;





};


int main ()
{


Student s;

s.name = "hamada";

cout << s.name << endl; // hamada


return 0 ;


}


*/