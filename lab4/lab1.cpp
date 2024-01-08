#include<iostream>
#define SIZE 5
using namespace std;
int main()
{
	int *arr = new int[SIZE];
	for(int i=0; i<SIZE; i++)
	{
		cout<<"Address of index arr["<<i<<"]: "<<arr+i<<"\n";
	}
	return 0;
}
