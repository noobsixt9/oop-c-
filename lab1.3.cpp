#include<iostream>

using namespace std;

class Contact
{
    string contactName;
    string contactNumber;
    static int contactTotal;

    public:
    Contact():contactName(),contactNumber()
    {
    }

    Contact(string Cname, string Cnumber):contactName(Cname),contactNumber(Cnumber)
    {
        contactTotal++;
    }

    void setInformation(string Cname, string Cnumber)
    {
        contactName = Cname;
        contactNumber = Cnumber;
        contactTotal++;
    }

    void showInformation()
    {
        cout<<"Contact Name: "<<contactName<<"\n"
        <<"Contact Number: "<<contactNumber<<endl;
    }

    static int getTotalContacts()
    {
        return contactTotal;
    }

};

int Contact::contactTotal = 0;

int main()
{
    Contact c1("rajan","982478488");
    Contact c2("mahesh","98232777");

    c1.showInformation();
    cout<<"\n";
    c2.showInformation();
    cout<<"\n";
    cout<<"Total contacts: "<<Contact::getTotalContacts()<<endl;

    
    return 0;
}