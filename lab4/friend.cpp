#include<iostream>

using namespace std;
class Test
{
	int a,b;
	public:
		Test(float a, float b)
		{
			this->a=a;
			this->b=b;
		}
		
		friend float avg(Test &);
};
float avg(Test &obj)
{
	return ((obj.a+obj.b)/2);
}

int main()
{
	Test t1(2,3);
	float rst = avg(t1);
	cout<<"AVERAGE: "<<rst<<endl;
	
}