#include<iostream>
#include<string>
using namespace std;
class Temperature{
	public:  //Accesss Sepicifier.
	double celsius;  //Temperature In Celsius.
	double fahrenheit;  //Temperature In Fahrenheit.
	
	double cel_to_fah(){  //Method For Conversion From Celsius To Fahrenheit.
	cout<<"Enter Temperature in Celsius : ";  //Input Temperature(Celsius).
	cin>>celsius;
    fahrenheit = (celsius * 9.0/5.0) + 32;  //Formula For Fahrenheit.
	}  
	double display(){  //Method For Output.
		return fahrenheit;
	} 
};