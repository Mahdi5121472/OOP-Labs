#include<iostream>
#include<string>
#include"Vote.h"
using namespace std;
int main(){
	//Task 3:Voting.
	Voter v;  //Object Of Class.
	v.getData();  //Calling Method For Input.
	if(v.isEligible()==true){  //Eligibility Checker.
		cout<<"Congratulation. You are Eligible for vote."<<endl;
	}else{
		cout<<"You are not Eligible for vote."<<endl;
	}
	
	return 0;
}