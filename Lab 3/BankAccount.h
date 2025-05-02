#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	private:
		double* balance;
		
		public:
		BankAccount(double bal){
			balance = new double(bal);
		}
		BankAccount(const BankAccount &bank){
			balance = bank.balance;
		}
		~BankAccount(){
		cout<<"Destructor is call."<<endl;
			delete balance;
		}
		void display(){
			cout<<"Balance is : $ "<<*balance<<endl;
		}
};