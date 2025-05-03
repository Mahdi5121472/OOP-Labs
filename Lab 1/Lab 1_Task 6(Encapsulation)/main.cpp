#include<iostream>
#include<string>
#include"Product.h"
using namespace std;
int main(){
    //Task 6:Encapsulation.
    Product p;  //Object Of Class.
    //Methods For Input.
    p.setName("");  //Setters.
    p.setPrice(-50);  //Setters.
    p.setQuantity(5);  //Setters.
    
    p.setName("Laptop");  //Setters.
    p.setPrice(1200.50);  //Setters.
    p.setQuantity(5);  //Setters.
    
    //Methods For Output.
    cout<<"Product : "<<p.getName()<<endl;  //Getters
    cout<<"Price : $  "<<p.getPrice()<<endl;  //Getters
    cout<<"Quantity : "<<p.getQuantity()<<endl;  //Getters
    
	return 0;
}