#include<iostream>
#include<string>
#include"BankAccount.h"
using namespace std;
int main(){
	//Task 1:Copy Constructor-Shallow Copy.
	BankAccount bnk(500.00);  //Object Of Class.
	BankAccount act(bnk);  //Copying Values.
	act.setBalance(600.00);  //Calling Method for Input Balance.
	bnk.display();  //Calling Method For Output.
	act.display();  //Calling Method For Output.
	
	return 0;
	
}