#include<iostream>
#include<string>
using namespace std;
class UpdateBankAccount{
	public:
		double* balance;
		
		public:
		UpdateBankAccount(double bal){
			balance = new double(bal);
		}
		UpdateBankAccount(const UpdateBankAccount &bank){
			balance = new double(*bank.balance);
		}
		void display(){
			cout<<"Balance is : $ "<<*balance<<endl;
		}
		~UpdateBankAccount(){
			delete balance;
		cout<<"Destructor is call."<<endl;

		}
		
};