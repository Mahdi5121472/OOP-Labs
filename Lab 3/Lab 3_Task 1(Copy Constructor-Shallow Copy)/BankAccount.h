#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	private:  //Access Specifier.
		double* balance;  //Bank Account Balance.
		
		public:  //Access Specifier.
		BankAccount(double bal){  //Parameterized Constructor
			balance = new double(bal);
		}
		BankAccount(const BankAccount &bank){  //Copy constructor.
			balance = bank.balance;
		}
		void setBalance(int bal){  //Setter.
			*balance = bal;
		}
		double getBalance(){  //Getter.
			return *balance;
		}
		void display(){  //Method for Output.
			cout<<"Balance is : $ "<<*balance<<endl;  //Output Balance.
		}
		~BankAccount(){  //Destructor.
		cout<<"Destructor is call."<<endl;
		delete balance;

	}
};