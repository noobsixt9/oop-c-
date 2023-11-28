#include<iostream>

using namespace std;

class Student
{
    string stdName; //priavate memebers 
    int sId;
    float sGpa;

    public:
        Student(string name, int id, float gpa):stdName(name),sId(id),sGpa(gpa) //member intializer --> contructor 
        {
        }

        void showInfo() //memeber functions
        {
            cout<<"Name: "<<stdName<<"\n"
            <<"ID: "<<sId<<"\n"
            <<"GPA: "<<sGpa<<endl;
        }
};

int main()
{
    Student s("rajan",1, 3.2);
    s.showInfo();

    return 0;
}