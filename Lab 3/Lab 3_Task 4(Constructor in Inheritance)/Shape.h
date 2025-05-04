#include<iostream>
#include<string>
using namespace std;
class Shape{  //Parent Class.
	public:  //Access Specifier.
		Shape(){  //Default Constructor.
			cout<<"Shape constructor called."<<endl;
		}		
};
class Rectangle:public Shape{  //Child Class.
	public:  //Access Specifier.
		Rectangle(){  //Default Contructor.
			cout<<"Rectangle constructor is called."<<endl;
		}
};