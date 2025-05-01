#include<iostream>
#include<string>
using namespace std;
class voter{
	public:  //Access Specifier
	string name;  //Voter Name.
	int age;  //Voter Age.
	
	void getData();  //Method Declaration.
	int isEligible();  //Method Declaration.
	
};
  //Method Definition Outside The Class.
    void voter :: getData(){
    	cout<<"Enter Name : ";  //Input Name.
    	cin>>name;
    	cout<<"Enter Age : ";  //Input Age.
    	cin>>age;
	}

	int voter :: isEligible(){
		bool isEligible = true;  //Using Bool variable.
		if(age>18){
			return true; 
		}else{
			return false;
		}
	}