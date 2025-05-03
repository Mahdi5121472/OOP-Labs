#include<iostream>
#include<string>
#include"Temperature.h"

using namespace std;
int main(){

	//Task 4:Temperature Convertor.

	Temperature t;  //Object Of Class.
	t.cel_to_fah();  //Calling Method For Conversion.
	cout<<"Temperature in Fahrenheit :"<<t.display()<<endl;  //Output.
	
	return 0;
}