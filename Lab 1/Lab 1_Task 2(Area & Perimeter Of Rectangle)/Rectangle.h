#include<iostream>
#include<string>
using namespace std;
class Rectangle{
	public:  //Access Specifier
	int length; //Rectangle Length.
	int width;  //Rectangle Width.
	
	void setDimensions();  //Method Declaration.
	int area();  //Method Declaration.
	int perimeter();  //Method Declaration.
};
  //Method Defiition Outside The Class.
  void Rectangle :: setDimensions(){
  	cout<<"Enter Length : ";  //Enter Length.
  	cin>>length;
  	cout<<"Enter Width : ";  //Enter Width.
  	cin>>width;
  }
  int Rectangle :: area(){
  	int A = length * width;  //Formula For Area Of Rectangle.
  	return A;
  }
  int Rectangle :: perimeter(){
  	int P = 2 * (length + width);  //Formula For Perimeter Of Rectangle.
  	return P;
  }
  
