#include<iostream>
#include<string>
using namespace std;
class Person{  //parent Class.
	protected:  //Access Specifier.
	string name;  //Person Name.
	int age;  //Person Age.

	public:  //Access Specifier.
		void setPerson(string n,int a){  //Method For input.
			if(!n.empty() && a>0){
			name = n;
			age = a;	
			}else{
				cout<<"Invalid Input."<<endl;
			}
		}
		void showPerson(){  //Method For output.
			cout<<"Name is : "<<name<<endl;  //Output Name.
			cout<<"Age is : "<<age<<endl;  //output Age.
		}
		
};
class Student:public Person{  //Child Class.
	private:  //Access Specifier.
	int rollNo;  //Student Roll Number.
		
	public:  //Access Specifier.
		void setStudent(string n,int a,int r){  //Method For input.  
			setPerson(n,a);
			if(r>0){
				rollNo = r;
			}else{
				cout<<"Invalid Input."<<endl;
			}	
		}
		void showStudent(){  //Method For output.
			showPerson();
			cout<<"Roll Number is : "<<rollNo<<endl;  //Output Roll Number.
		}
			
};