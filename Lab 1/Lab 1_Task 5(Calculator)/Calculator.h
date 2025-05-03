#include<iostream>
#include<string>
using namespace std;
class Calculator{
	public:  //Access Specifier.
	float num1;  //Calculator's First Number.
	float num2;  //Calculator's Second Number.
	
	void getData();  //Method Declaration.
	float add();  //Method Declaration.
	float subtract();  //Method Declaration.
	float multiply();  //Method Declaration.
	float divide();  //Method Declaration.
	
};
  //Method Definition Outside The Class.
  void Calculator :: getData(){
  	cout<<"Enter First Number : ";  //Input First Number. 
  	cin>>num1;
  	cout<<"Enter Second Number : ";  //Input Second Number.
  	cin>>num2;
  }
  float Calculator :: add(){  //Method For Addition.
  	float sum = num1 + num2;
  	return sum; 
  }
   float Calculator :: subtract(){  //Method For Subtraction.
  	float sub = num1 + num2;
  	return sub; 
  }
   float Calculator :: multiply(){  //Method For Multiplication.
  	float mul = num1 * num2;
  	return mul; 
  }
   float Calculator :: divide(){  //Method For Division.
  	if (num2 != 0){
            return num1 / num2;
        }else {
            cout << "Error: Division by zero!" << endl;
            return 0;
  }
}