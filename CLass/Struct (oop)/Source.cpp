# include <iostream>
using namespace std;

//  ���(poblic) ������ �����  <== struct 


struct student // struct = class ���� ��� 

{
	string name;
	int id;
	float gpa;
	double grad;

};

int main()

{
	student op1, op2;  // ����� ������ 
	

	// ����� ����
	op1.name = "Hamada Sayed";
	op1.id = 621224;
	op1.gpa = 3.2;
	op1.grad = 90.5;



	// ����� ����
	op2.name = "Halla Sayed";
	op2.id = 621244;
	op2.gpa = 3.9;
	op2.grad = 60.5;



	/*

	������ ����� ��� ������ (==)

	if (op1.grad == op2.grad) {


		cout << "thay equvlans " << endl;


	}

	*/




	 // op1 = op2; ���� ����� �� ��� ������ ����� ������� ������
	// op2 ����� ��� 






	// ����� ���� ������ �����
	cout << "name is : " << op1.name << endl;
	cout << "ID is : " << op1.id << endl;
	cout << "gpa is : " << op1.gpa << endl;
	cout << "grad is : " << op1.grad << endl;
	cout << "----------------------" << endl;
	
	
	
	
	
	
	
	// ����� ���� ������ ������
	cout << "name is : " << op2.name << endl;
	cout << "ID is : " << op2.id << endl;
	cout << "gpa is : " << op2.gpa << endl;
	cout << "grad is : " << op2.grad << endl;
	cout << "----------------------" << endl;
	


	return 0;

}
