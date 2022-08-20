# include <iostream>
using namespace std;

// »—‰«„Ã ·Õ”«» „”«ÕÂ «·„” ÿÌ·

class rect {

public:

	int lingth;

	int width;

	int print()


	{

		return lingth * width;


	}

};

int main()

{

	rect op;

	op.lingth = 40;

	op.width = 2;

	cout << "rect angle array = " << op.print() << endl;

	

	return 0;

}