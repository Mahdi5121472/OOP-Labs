#include<iostream>
#include<string>
#include"UpdateBankAccount.h"
using namespace std;
int main(){
	UpdateBankAccount bnk(500.00);  //Oject Of Class.
	UpdateBankAccount act = bnk;  //Copying Values.
	act.setBalance(600.00);  //Calling Method For Input Balance.
	bnk.display();  //Calling Method For Output.
	act.display();  //Calling Method For Output.
	
	return 0;
}