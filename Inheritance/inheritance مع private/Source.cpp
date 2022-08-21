#include<iostream>
using namespace std;

// settter æ grtter  ÈÇÓÊÎÏÇã  

class person
{

public:
	

	// getter
	void set_age(int age)
	{
		this-> age = age; // åíÌíÈ Şíãå ÇáÚãÑ ãä ÇáÎÇÕ æíÍØåÇ ÏÇÎá ÇáÏÇáå 
	}

	void set_name(string  name)
	{
		this->name = name;

	}

	void set_id(int id)
	{
		this->id = id;
	}


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



	// setter
	int get_age()
	{
		return age;
	}


	int get_id()
	{
		return id;
	}


	string get_name()
	{
		return name;
	}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


private:

	int age;
	string name;
	int id;

};


// person æÑË ßá ÍÇÌå ãæÌæÏå 
class Student : public person  // Inheritance ÇáæÑÇËå

{

public:

	float Gpa;


private:


};


int main()
{

	// class æÑËå Çá <==< person
	Student s;

	s.set_name("hamada");
	cout <<" name : " << s.get_name() << endl;

	
	s.set_id(621224);
	cout <<" id : " << s.get_id() << endl;


	s.set_age(148);
	cout <<" age : " << s.get_age() << endl;


	s.Gpa = 3.7;
	cout << " Gpa : " << s.Gpa << endl;
}