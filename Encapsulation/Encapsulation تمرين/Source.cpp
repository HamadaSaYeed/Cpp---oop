#include < iostream >
using namespace std;
class Youtube {

private:

	string name;
	int vidus;
	int sub;

public:

	void show () { // function
		cout << "------------------" << endl;
		cout << "name  ==> " << name << endl;
		cout << "vidus ==> " << vidus << endl;
		cout << "sub   ==> " << sub << endl;
		cout << "------------------" << endl;
	}


	void add(string  x, int y, int z) { // ÚÔÇä ÇÎÏ ÌãíÚ Şíã ÎÇÕå

		name = x;
		vidus = y;
		sub = z;
	}

};
int main()
{
	// tow opject

	Youtube op1;
	Youtube op2;


	// user input value

	string name;
	int vidus;
	int sub;

	cout << "enter a name : ";
	cin >> name;

	cout << "enter the num vidus : ";
	cin >> vidus;

	cout << "entre the Subscribers : " ;
	cin >> sub;

	op1.add(name, vidus, sub);  // åíØÈÚ ÇáŞíã ÚÇÏí

	op2.add(name, vidus, sub);  // åíØÈÚ ÇáŞíã ÚÇÏí

	op1.show(); // åíØÈÚ Şíã ÚÔæÆíå 
	op2.show(); // åíØÈÚ Şíã ÚÔæÆíå 


	return 0;

}