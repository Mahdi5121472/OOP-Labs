#include<iostream>
#include<string>
using namespace std;
class temperature{
	public:  //Accesss Sepicifier.
	double celsius;  //Temperature In Celsius.
	double fahrenheit;  //Temperature In Fahrenheit.
	double kelvin;  //Temperature In Kelvin.
	
	double cel_to_fah(){  //Method For Conversion From Celsius To Fahrenheit.
	cout<<"Enter Temperature in Celsius : ";  //Input Temperature(Celsius).
	cin>>celsius;
    fahrenheit = (celsius * 9.0/5.0) + 32;  //Formula For Fahrenheit.
	return fahrenheit;
	}
	
	double fah_to_cel(){  //Method For Conversion From Fahrenheit To Celsius.
	cout<<"Enter Temperature in Fahrenheit : ";  //Input Temperature(Fahrenheit).
	cin>>fahrenheit;
	 celsius = (fahrenheit - 32) * 5.0/9.0;  //Formula For Celsius.
	return celsius;
	}
	
	double fah_to_kel(){  //Method For Conversion From Fahrenheit To Kelvin.
	cout<<"Enter Temperature in Fahrenheit : ";  //Input Temperature(Fahrenheit).
	cin>>fahrenheit;
	 kelvin = (fahrenheit - 32) * 5.0/9.0 + 273.15;//Formula For Kelvin.
	return kelvin;
    }
    double kel_to_fah(){  //Method For Conversion From Kelvin To Fahrenheit.
	cout<<"Enter Temperature in Kelvin : ";  //Input Temperature(Kelvin).
	cin>>kelvin;
	 fahrenheit = (kelvin - 273.15) * 9.0/5.0 + 32;//Formula For Fahrenheit.
	return fahrenheit;
	}
    double cel_to_kel(){  //Method For Conversion From Celsius To Kelvin.
	cout<<"Enter Temperature in Celsius : ";  //Input Temperature(Celsius).
	cin>>celsius;
	 kelvin = celsius + 273.15;  //Formula For Kelvin.
	return kelvin;
    }
     double kel_to_cel(){  //Method FOr Conversion From Kelvin To Celsius.
	cout<<"Enter Temperature in Kelvin : ";  //Input Temperature(Kelvin).
	cin>>kelvin;
	 celsius = kelvin - 273.15;  //Formula For Celsius.
	return celsius;
    }
    
};