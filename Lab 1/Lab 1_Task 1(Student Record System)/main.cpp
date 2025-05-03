#include<iostream>
#include<string>
#include<iomanip>
#include"student.h"
using namespace std;
int main(){

	//Task 1:Student Record System.
	
	student std;  //Object Of Class.
	std.getData();  //Calling Method For Input.
	cout<<"************************"<<endl;
	cout<<fixed<<setprecision(2);
	std.displayData();  //Callling Method For Output.

	return 0;
}