#include<iostream>

using namespace std;

class Product
{
    static int totalProducts;
    string productName;
    int productId;
    double productPrice;

    public:
    Product(string name, int id, double price):productName(name),productId(id),productPrice(price)
    {
        totalProducts++;
    }

    void setInformation(string name, int id, double price)
    {
        productName = name;
        productId = id;
        productPrice = price;
        totalProducts++;
    }

    void showInformation()
    {
        cout<<"Product Name: "<<productName<<"\n"
        <<"Product ID: "<<productId<<"\n"
        <<"Product Price: "<<productPrice<<endl;
    }

    static int getTotalProducts()
    {
        return totalProducts;
    }

};

int Product::totalProducts=0;

int main()
{

    Product p1("Laptop",1,32000.00);
    Product p2("Smartphone",2,16000.00);

    p1.showInformation();
    cout<<"\n";
    p2.showInformation();
    cout<<"\n";

    cout<<"Total Number of products: "<<Product::getTotalProducts()<<endl;
}

