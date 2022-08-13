# include <iostream>
using namespace std;

class MyClass
{
private:

	int x;
	int y;

public:

	// tow function for set and get to x

	void give_x(int a) { // function give prameter

		x = a;  // x = value  prameter

		cout <<" x = " << x << endl;
	}



	// tow function for set and get to y 

	void give_y(int a) {

		y = a;

		cout <<" y = " << y << endl;
	}


};

int main() {

	MyClass op1;

	MyClass op2;
	int s;
	int b;
	cout << "enter a number x : " << endl;
	cin >> s;
	cout << "enter a number y : " << endl;
	cin >> b;

	op1.give_x(s); // print value x  // 5

	op2.give_y(b);// print value y // -9


	return 0;
}