#include<iostream>

using namespace std;

class Employee
{
    string eName;
    int eID;
    double eSalary;
    static int eTotal;

    public:
    // Employee(string name, int id, double salary):eName(name),eID(id),eSalary(salary)
    // {
    //     eTotal++;
    // }

      Employee(string name, int id, double salary):eName(name),eID(id),eSalary(salary)
    {
        eName = name;
        eID = id;
        eSalary = salary;
        eTotal++;
    }

    void showInformation()
    {
        cout<<"Employee Name: "<<eName<<"\n"
        <<"Employee ID: "<<eID<<"\n"
        <<"Employee Salary: "<<eSalary<<endl;
    }

    static int getTotal()
    {
        return eTotal;
    }

};

int Employee::eTotal=0;

int main()
{
    Employee e1("Rajan",1,3200.00);
    Employee e2("Mahesh",2,19000.00);

    e1.showInformation();
    cout<<endl;
    e2.showInformation();
    cout<<endl;
    cout<<"Total No. of Employee: "<<Employee::getTotal()<<endl;
    return 0;
}