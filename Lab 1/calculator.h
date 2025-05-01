#include<iostream>
#include<string>
using namespace std;
class calculator{
	public:  //Access Specifier.
	float num1;  //Calculator's First Number.
	float num2;  //Calculator's Second Number.
	
	void getData();  //Method Declaration.
	double add();  //Method Declaration.
	double subtract();  //Method Declaration.
	double multiply();  //Method Declaration.
	double divide();  //Method Declaration.
	
};
  //Method Definition Outside The Class.
  void calculator :: getData(){
  	cout<<"Enter First Number : ";
  	cin>>num1;
  	cout<<"Enter Second Number : ";
  	cin>>num2;
  }
  double calculator :: add(){
  	double sum = num1 + num2;
  	return sum; 
  }
   double calculator :: subtract(){
  	double sub = num1 + num2;
  	return sub; 
  }
   double calculator :: multiply(){
  	double mul = num1 * num2;
  	return mul; 
  }
   double calculator :: divide(){
  	double div = num1 / num2;
  	return div; 
  }