#include<iostream>
#include<string>
using namespace std;
class rectangle{
	public:  //Access Specifier
	int length; //Rectangle Length.
	int width;  //Rectangle Width.
	
	void setDimensions();  //Method Declaration.
	int area();  //Method Declaration.
	int perimeter();  //Method Declaration.
};
  //Method Defiition Outside The Class.
  void rectangle :: setDimensions(){
  	cout<<"Enter Length : ";  //Enter Length.
  	cin>>length;
  	cout<<"Enter Width : ";  //Enter Width.
  	cin>>width;
  }
  int rectangle :: area(){
  	int A = length * width;  //Formula For Area Of Rectangle.
  	return A;
  }
  int rectangle :: perimeter(){
  	int P = 2 * (length + width);  //Formula For Perimeter Of Rectangle.
  	return P;
  }
  
