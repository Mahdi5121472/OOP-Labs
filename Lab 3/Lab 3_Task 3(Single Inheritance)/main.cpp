#include<iostream>
#include<string>
#include"Person.h"
using namespace std;
int main(){
	//Task 3:Single Inheritance.
	Person P;  //Object Of Class.
	P.setPerson("Mahdi",20);  //Calling Method For Input.
	P.showPerson();  //Calling Method For Output.
	
	Student S;  //Object Of Class.
	S.setStudent("Ali",15,200);  //Calling Method For Input.
	S.showStudent();  //Calling Method For Output.
	
	return 0;
}