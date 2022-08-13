 #include<iostream>
using namespace std;

class first

{

protected: // ›ﬁÿ class „Õ„Ì --> Ì” Œœ„ œ«Œ· 

	int id = 621224;


};

class second : public first // inheritance

{

public:
	 
	void get_protected() // function 
	
	{
		cout << " id is a protected and equl : " << id << endl;
	}


};

int main()

{

	second op; // call the object

	op.get_protected(); //  id is a protected and equl : 621224


	return 0;
}