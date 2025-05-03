#include<iostream>
#include<string>
#include"Rectangle.h"
using namespace std;
int mai(){
	//Task 2:Rectangle.
	Rectangle r;  //Object Of Class.
	cout<<"***********************"<<endl;
	r.Dimension();  //Calling Method For Input.
	cout<<"Area : "<<r.area()<<endl;  //Calling Method For Area.
	cout<<"Perimeter : "<<r.perimeter()<<endl;  //Calling Method For Perimeter.
	
    return 0;
}