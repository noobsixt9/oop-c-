#include<iostream>
#define SIZE 5
using namespace std;

void greatest(int *arr, int *great, int *less)
{
	*great=*arr;
	*less=*arr;
	for(int i=0; i<SIZE; i++)
	{
		if(*great<=*(arr+i))
		{
			*great = *(arr+i);
		}
		else if(*less>=*(arr+i))
		{
			*less = *(arr+i);
		}		
	}
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
	int great, less;
	getdata(arr);
	greatest(arr, &great, &less);
	cout<<"largest: "<<great<<endl<<"Smallest: "<<less;

}
