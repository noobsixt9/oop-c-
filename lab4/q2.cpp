#include<iostream>
#define SIZE 5
using namespace std;

int getsum(int *arr)
{
	int sum = 0;
	for(int i=0; i<SIZE; i++)
	{
		sum = sum + *(arr+i);
	}
	return sum;
} 
void getdata( int *arr)
{
	for(int i=0; i<SIZE; i++)
	{
		cout<<"Data in index["<<i<<"]: ";
		cin>>*(arr+i);
	}
}

int main()
{
	int* arr = new int[SIZE];
	getdata(arr);
	cout<<"Sum: "<<getsum(arr);
	delete(arr);

}
