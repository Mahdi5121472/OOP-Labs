#include<iostream>
#include<string>
#include"Calculator.h"
using namespace std;
int main(){
	//Task 5:Caculator.
    Calculator calc;  //Object For Class.
    int choice;  //Integer Variable.
    calc.getData();  //Calling Method For Input.

    cout << "Choose an operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter choice : ";  //Input Choice,
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << calc.add() << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract() << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply() << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide() << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}