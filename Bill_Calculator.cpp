#include <iostream>
#include <string>
using namespace std;

class product
{
private:
    string name;
    float price;
    int quantity;
public:
    product(string n, float p, int q){
    name = n;
    price = p;
    quantity = q;}




void display(){
    string nm[100];
    int quan[100];
    float pr[100];
    float bill = 0;
    int n;
    cout<<"Enter number of product You bought: "<< endl;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Details of Product "<<n<< ":" << endl;
        cout<<"Enter name of the Product "<<i+1<<": "<<endl;
        cin>>nm[i];
        cout<<"Enter quantity of the product "<<i+1<<": "<<endl;
        cin>>quan[i];
        cout<<"Enter Price of the product "<<i+1<<": "<<endl;
        cin>>pr[i];

        bill += pr[i] * quan[i];
    }
    cout<<"Here is the details of product: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<"Product "<<i+1<<" is: "<<nm[i]<<endl;
        cout<<"Quantity of product "<<i+1<<" is: "<<quan[i]<<endl;
        cout<<"Price of product "<<i+1<<" is: "<<pr[i]<<endl;
    }
    
    
    cout<<"Total bill is: "<< bill<<endl;
    
}
};
int main(){
    string name;
    float price;
    int quantity;

    product pro(name, price, quantity);

    pro.display();
    return 0;

}

