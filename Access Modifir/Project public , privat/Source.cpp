# include <iostream>
using namespace std;


/*

class Circle 
         
	radius
	set_value
	print_Area
  // area of Circle is π r^2 : π = 3.14

*/

//  (public & private)   <==  مساحه الدائره 


class Circle {

private :

	int radius;

public:

	void set_value() {  // function tack a Value of user 


		cout << "enter a radius : " << endl;

		cin >> radius ;
		

	}

	void print_Area() {
		
		float π = 3.14;

		cout << π * pow(radius, 2) << endl;  // sturacther op problem



	}


};

int main() {


	Circle op;


	op.set_value();

	op.print_Area();

}