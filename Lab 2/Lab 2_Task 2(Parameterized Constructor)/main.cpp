#include<iostream>
#include<string>
#include"BankAccount.h"
using namespace std;
int main(){
	//Task 2:Parameterized Constructor.
	BankAccount B("PK07664535428975","Mahdi Ali",9000);  //Object Of Class With Initialization.
	B.showAccountDetails();  //Calling Method For Display.
	
	return 0;
}