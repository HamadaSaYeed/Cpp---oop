// multiple inheritance part 1


/*

  // single inheritance  ------ >  æÑÇËå ÚÇÏíå 
   
     class A 
     class B : public A
     class c : public A



  // multiple inheritance ------- > class æÑÇËå ÇßËÑ ãä 

  class A
  class B
  class c : public A , public B


*/


# include <iostream>
using namespace std;


// class 1111111111111111
class A
{

private:

    string name;
    int age;

public:

    A(string name, int age) // consterctor 
    {
        this->name = name;
        this->age = age;
    }

    void set()
    {
        cout << "Name : " << name << endl;
        cout << "Age = " << age << endl;
    }
};


// class 22222222222222
class B
{

private:

    string email;

public:

    B(string email) // constructer
    {
        this->email = email;
    }

    void set()
    {
        cout << "email :" << email << endl ;
    }

};


// class 333333333333
class C : public A , public B              // multiple inheritance
{
private:

    int grade;

public:

    C(string name, int age, string email, int grade) : A(name,age) , B(email) // constructer to inheritance
    {
        this->grade = grade;
    }

    void set()
    {

        // ãÚäÇåÇ ŞÏÑÊ ÇæÑË ÇáÏæÇá ÈÊÇÚå ßá ßáÇÓ & ÇÓÊÏÚÇÁ ßá ÇáÏæÇá 
        A::set();
        B::set();

        cout << "grade : " << grade << endl;
    }

};


int main()

{

  // call class

    C op3("Hamada", 19, "Hamada@gamil.com", 89);
    op3.set(); //  ÈßæÏ æÍÏ ŞÏÑÊ ÇÓÊÏÚí ßá ÇáŞíã


    return 0;


}