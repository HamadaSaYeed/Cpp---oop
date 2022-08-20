# include <iostream>
using namespace std;

//  İŞØ(poblic) äÓÊÎÏã ãÚÇåÇ  <== struct 


struct student // struct = class ÊÚãá Úãá 

{
	string name;
	int id;
	float gpa;
	double grad;

};

int main()

{
	student op1, op2;  // ÚÑİäÇ ßÇÆäíä 
	

	// äÏíåã ÕİÇÊ
	op1.name = "Hamada Sayed";
	op1.id = 621224;
	op1.gpa = 3.2;
	op1.grad = 90.5;



	// äÏíåã ÕİÇÊ
	op2.name = "Halla Sayed";
	op2.id = 621244;
	op2.gpa = 3.9;
	op2.grad = 60.5;



	/*

	áæÚÇæÒ ÇŞÇÑä Èíä ÚäÕÑíä (==)

	if (op1.grad == op2.grad) {


		cout << "thay equvlans " << endl;


	}

	*/




	 // op1 = op2; ããßä ÇÓÇæí ßá Şíã ÇáßÇÆä ÇáÇæá ÈÇáßÇÆä ÇáËÇäì
	// op2 åíØÈÚ Şíã 






	// ØÈÇÚå ÕİÇÊ ÇáßÇÆä ÇáÇæá
	cout << "name is : " << op1.name << endl;
	cout << "ID is : " << op1.id << endl;
	cout << "gpa is : " << op1.gpa << endl;
	cout << "grad is : " << op1.grad << endl;
	cout << "----------------------" << endl;
	
	
	
	
	
	
	
	// ØÈÇÚå ÕİÇÊ ÇáßÇÆä ÇáËÇäì
	cout << "name is : " << op2.name << endl;
	cout << "ID is : " << op2.id << endl;
	cout << "gpa is : " << op2.gpa << endl;
	cout << "grad is : " << op2.grad << endl;
	cout << "----------------------" << endl;
	


	return 0;

}
