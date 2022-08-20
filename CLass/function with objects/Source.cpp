#include <iostream>
using namespace std;

//   object   ” ﬁ»·  function  Ã„⁄ ﬁÌ„ Ì‰ 

class School
{
private :

	string name;
	int mark;

public :
	

	School(string n , int m)  // Constructor with parameater 
	
	{
		name = n;
		mark = m;

	}


	~School() {}  // Destrcutor


	void sum (School op1, School op2)  // function with object   ==>   object   ” ﬁ»·  function
	
	{

		cout << op1.mark + op2.mark << endl; // smu ==> value 

	}



};


int main()

{

	School op1("Hamada",100);       // object one with parameater
	
	
	School op2("Ali", 200);      // object tow with parameater


	op1.sum(op1,op2);         //  calling function 
	

	return 0;
	
}