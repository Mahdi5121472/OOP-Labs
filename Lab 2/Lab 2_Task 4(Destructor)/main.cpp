#include<iostream>
#include<string>
#include"Locker.h"
using namespace std;
int main(){
	//Task 4:Destructor.
	Locker oneLocker;  //Object Of Class.
	Locker* ptr = new Locker();  
	delete ptr;  //Destructor Called Manaully.
}