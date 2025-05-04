#include<iostream>
#include<string>
using namespace std;
class UpdateBankAccount{
	private:  //Access Specifier.
		double* balance;  //Bank Account Balance.
		
		public:  //Access Specifier.
		UpdateBankAccount(double bal){  //Parametrized Constructor.
			balance = new double(bal);
		}
		UpdateBankAccount(const UpdateBankAccount &bank){  //Copy Constructor.
			balance = new double(*bank.balance);
		}
		void setBalance(int bal){  //Setter.
			*balance = bal;
		}
		double getBalance(){  //Getter.
			return *balance;
		}
		void display(){  //Method For Output.
			cout<<"Balance is : $ "<<*balance<<endl;  //Output Balance.
		}
		~UpdateBankAccount(){  //Destructor.
			delete balance;
		cout<<"Destructor is call."<<endl;

		}
		
};