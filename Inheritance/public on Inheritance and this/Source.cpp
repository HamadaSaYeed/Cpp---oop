# include <iostream>
using namespace std;

class first
{

private:

	int id;

public:

	first(int id)
	{
		this->id = id;

		cout << "hi i am constructor first " << endl;
	}
};
class scond : private first

{

private:

	int id;

public:

	scond(int id , int op): first(id)
	{
		this->id = op;

		cout << "hi i am constructor scond " << endl;
	}
};

int main()
{
	first(5);
	scond o(5,545);
}