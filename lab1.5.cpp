/* Implement a class named ComplexNumber to represent complex  numbers. Include private data members for the real and imaginary parts. Implement a parameterized 
constructor (ComplexNumber) to initialize these values. Create ComplexNumber objects and display their information using a method (displayInformation()). */

#include<iostream>

using namespace std;

class ComplexNumber
{
    int Rz;
    int Iz;

    public:
    ComplexNumber(int x, int z):Rz(x),Iz(z)
    {

    }

    void displayInformation()
    {
        cout<<"Real Number: "<<Rz<<"\n"
        <<"Imaginary Number: "<<Iz<<endl;
    }

};


int main()
{
    ComplexNumber c1(21, 33);
    c1.displayInformation();

    return 0;
}
