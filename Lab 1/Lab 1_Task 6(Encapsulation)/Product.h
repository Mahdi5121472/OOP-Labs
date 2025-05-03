#include<iostream>
#include<string>
using namespace std;
class Product{
	private:  //Access Specifier.
		string name;  //Product Name.
		double price;  //Product Price.
		int quantity;  //Product Quantity.
		
		public:  //Access Specifier.
			void setName(string n){  //Method For Input.
			if(!n.empty()){
				name = n;
			}else{
				cout<<"Invalid Name. Name cannot be empty."<<endl;
			}	
			}
			void setPrice(double p){  //Method For Input.
				if(p>0){  //Checking Whether Input Is Valid.
					price = p;
				}else{
					cout<<"Invalid Price. Price cannot be negative."<<endl;
				}
			}
			void setQuantity(int q){  //Method For Input.
				if(q>=0){  //Checking Whether Input Is Valid.
					quantity = q;
				}else{
					cout<<"Invalid Quantity. Quantity cannot be negative."<<endl;
				}
			}
			string getName(){  //Method For Output.
				return name;
			}
			double getPrice(){  //Method For Output.
				return price;
			}
			int getQuantity(){  //Method For Output.
				return quantity;
			}
		
};