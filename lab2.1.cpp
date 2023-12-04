//parameterized constructor with single inheritance 



#include<iostream>

using namespace std;

class A
{
	int a;
	
	public:
		A(int x):a(x){
		}
		
		void show_a()
		{
			cout<<"value of A: "<<a<<endl;
		}
		
};

class B: public A
{
	int b;
	
	public:
		B(int x, int y):A(x)
		{
			b = y;
		}
		
		void show_num()
		{
			show_a();
			cout<<"value of B: "<<b<<endl;
		}
};

int main()
{
	B obj1(3,4);
	obj1.show_num();
	
	return 0;
}

