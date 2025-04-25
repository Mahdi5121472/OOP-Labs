#include<iostream>
#include<string>
using namespace std;
class student{
	public:  //Access Specifier.
	string name;  //Student Name.
	int rollNumber;  //Student Roll Number.
	float marks;  //Student Marks.
	
	void getData(){  //Method for Input.
		cout<<"Enter Name : ";  //Input Name.
		cin>>name;
		cout<<"Enter Roll Number : ";  //Input Roll Number.
		cin>>rollNumber;
		cout<<"Enter Marks : ";  //Input Marks.
		cin>>marks;
	}
	
	void displayData(){  //Method for Output.
	cout<<"Name : "<<name<<endl;  //Output Name
	cout<<"Roll Number : "<<rollNumber<<endl;  //Output Roll Number
	cout<<"Marks : "<<marks<<endl;  //Output Marks
		
	}
};