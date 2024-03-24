#include <iostream>
using namespace std;

class Account{
    private:
        int acc_num;
        string acc_holder_name;
        string acc_type;
        int balance;
    public:
        void getAccountInformation(){
            cout << "Enter account number: ";
            cin >> acc_num;
            cout << "Enter account holder name: ";
            cin >> acc_holder_name;
            cout << "Account type: (saving/current): ";
            cin >> acc_type;
            cout << "Enter balance: ";
            cin >> balance;
        }
        void display(){
            cout << "\nAccount number: " << acc_num << endl;
            cout << "Account holder name: " << acc_holder_name << endl;
            cout << "Account type: " << acc_type << endl;
            cout << "Balance: " << balance << endl;
        }
        void withdraw(){
            int num;
            cout << "\nEnter amount to withdraw: ";
            cin >> num;
            if((balance - num) > 0){
                balance = balance - num;
                cout << "withdrawn successfully." << endl;
            }
            else{
                cout << "you're broke."<< endl;
            }
        }
        void deposit(){
            int num;
            cout << "\nEnter amount to deposit: ";
            cin >> num;
            balance = balance+num;
            cout << "Deposited." << endl;
        }
};
int main(){
    Account a;
    a.getAccountInformation();
    a.display();
    a.withdraw();
    a.deposit();
    a.display();
    return 0;
}
