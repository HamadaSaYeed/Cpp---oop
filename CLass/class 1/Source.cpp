# include <iostream>
using namespace std;

class Student {

public:

	// ��� ���� ���� ����� 

	string  name ;

	int age;

	int ID;
	
	int grade;



};

int main()

{
	Student op1;   /* �� ���� ������� */                         //   ���� opject ����  

	Student op2;   /* �� ���� ������� */                         //   ���� opject ����  

	
																 
																 
	//1��� ���� ������
	

	op1.name = "hamada sayed";

	op1.age = 18;

	op1.ID = 621224;

	op1.grade = 88;

	



	//op1 ���� ���� �����

	cout << "op1 's name : " << op1.name << endl;

	cout << "op1 's age : " << op1.age <<" rers"<< endl;

	cout << "op1 's ID : " << op1.ID << endl;

	cout << "op1 's grade : "<< op1.grade <<"%"<< endl;

	cout << "--------------------" << endl;


	//2��� ���� ������


	op2.name = "yousif";

	op2.age = 11;

	op2.ID = 621524;

	op2.grade = 68;




	//op2 ���� ���� �����

	cout << "op2 's name : " << op2.name << endl;

	cout << "op2 's age : " << op2.age <<" yers"<< endl;

	cout << "op2 's ID : " << op2.ID << endl;

	cout << "op2 's grade : " << op2.grade <<"%"<< endl;

	cout << "------------------" << endl;



	return 0;


}