#include <iostream>
using namespace std;

class A
{
public:

	void print()   // Function that uses the same name -- > ���� ������ ��� �����
	{
		cout << "Function from class (A)" << endl;
	}

};

class B : public A
{
public:

	void print()   // Function that uses the same name -- > ���� ������ ��� �����
	{
		cout << "Function from class (B)" << endl;
	}

};


int main()
{
	B op;

	//  ����� ��� ��� ��������
	op.print();  // Function from class (B)  < --  �������� 


	// ��� ��� ����
	op.A::print();  // Function from class (A) < --   (A)  class  ����  print()  ������ ������ 


	return 0;
}