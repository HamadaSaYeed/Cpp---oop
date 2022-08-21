
/*   
* 
*                                                <----- ÇáãíÑÇË ÇáåÑãí ----->
*                                                < Hierarchical inheritance >


class A

class B : public A

class C : public A

class D : public A


*/

#include <iostream>
using namespace std;

class Person
{
private:

	int age;
	string name;

public:

	Person(int age,string name)

	{
		this->age = age;
		this->name = name;
	}

	void print()
	{
		cout << "your name is : " << name << endl;
		cout << "your age is : " << age << endl;
	}
	
};

class Student : public Person
{
private:

	int grade;

public:

	Student(int age, string name , int grade) : Person(age,name)

	{
		this->grade = grade;
	}

	void print()
	{
		cout << "your grade is : " << grade << endl;
	}

};

class Employee : public Person
{
private:

	int id;
	int salary;

public:

	Employee(int age, string name,int grade,int id, int salary) : Person(age,name)

	{
		this->id = id;
		this->salary = salary;
	}

	void print()
	{
		Person::print();

		cout << "your id is : " << id << endl;
		cout << "your salary is : " << salary << endl;
	}

};

int main()

{

	Employee op(18, "Hamada Sayed Mohamed", 90, 621224, 50000);

	op.print();


	return 0;
}

