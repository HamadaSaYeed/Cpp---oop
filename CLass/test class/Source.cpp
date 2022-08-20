# include <iostream>
using namespace std;

class Books {

public:

	// Â‰« »ﬂ » ‘ÊÌÂ Œ’«¡’ 

	string  name;

	int price;

	string outhor;

	int pages;
};

int main()

{

	Books Bo1;

	Books Bo2;

	Books Bo3;


	Bo1.name = "Algorithm";

	Bo1.price = 500;

	Bo1.pages = 200;

	Bo1.outhor = "Hamada";


	cout << "name book ' s : " << Bo1.name  << endl;

	cout << "price ' s : " << Bo1.price << "$" << endl;

	cout << "pages ' s : " << Bo1.pages << endl;

	cout << "outhor ' s : " << Bo1.outhor << endl;




	cout << "-------------------" << endl;




	Bo2.name = "Algorithm";

	Bo2.price = 900;

	Bo2.pages = 300;

	Bo2.outhor = "Sayed";


	cout << "name book ' s : " << Bo2.name << endl;

	cout << "price ' s : " << Bo2.price << "$" << endl;

	cout << "pages ' s : " << Bo2.pages << endl;

	cout << "outhor ' s :  " << Bo2.outhor << endl;




	cout << "-------------------" << endl;




	Bo3.name = "Algorithm";

	Bo3.price = 150;

	Bo3.pages = 350;

	Bo3.outhor = "yousif";


	cout << "name book ' s : " << Bo3.name << endl;

	cout << "price ' s : " << Bo3.price << "$" << endl;

	cout << "pages ' s : " << Bo3.pages << endl;

	cout << "outhor ' s : " << Bo3.outhor << endl;



	cout << "-------------------" << endl;



	return 0;

}