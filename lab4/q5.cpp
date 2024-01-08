#include<iostream>
#define SIZE 3
using namespace std;

class Book
{
	int id;
	string name;
	double price ;
	string pubname;
	public:
		void getdata()
		{
			cout<<"id: ";
			cin>>id;
			cout<<"name: ";
			cin>>name;
			cout<<"Price: ";
			cin>>price;
			cout<<"Publication Name: ";
			cin>>pubname;		
		}
		void showdata();
};
void Book::showdata()
{
	cout<<"ID: "<<id<<endl<<"Name: "<<name<<endl<<"Price: "<<price<<endl<<"Publication name: "<<pubname<<endl;
}

int main()
{
	 Book *arr= new Book[SIZE];
	 cout<<"\t\tEnter details"<<endl;
	 for(int i=0; i<SIZE; i++)
	 {
	 	(arr+i)->getdata();
	 	cout<<endl;
	 }
	 	cout<<"\t\Printing details"<<endl;
	 for(int i=0; i<SIZE; i++)
	 {
	 	(arr+i)->showdata();
	 	cout<<endl;
	 }
	 
	 
}

