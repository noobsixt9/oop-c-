#include<iostream>

using namespace std;

class Employee
{
	int id;
	string name;
	string address;
	string phone;
	string email;
	
	public:
		Employee(int i, string n, string a, string p, string e):id(i),name(n),address(a),phone(p),email(e)
		{
		}
		
		void showEmployee()
		{
			cout<<"\t\t\tDisplaying Employee Information"<<endl;
			cout<<"Employee ID: "<<id<<endl
			<<"Employee Name: "<<name<<endl
			<<"Employee Address: "<<address<<endl
			<<"Employee Phone: "<<phone<<endl
			<<"Employee Email: "<<email<<endl;
		}
};


class Programmer: public Employee
{
	string prolog;
	
	public:
		Programmer(int i, string n, string a, string p, string e,string plang):Employee(i,n,a,p,e)
		{
			prolog = plang;
		}
		
		void showInfo()
		{
			showEmployee();
			cout<<"Porgamming Language: "<<prolog<<endl;
		}
};

int main()
{
	Programmer p1(1,"Rajan","Dhangadhi","98232323","rajanrajan@gmail.com","CPP");
	p1.showInfo();
	
	return 0;
}
