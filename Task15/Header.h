#include <iostream>
using namespace std;
#include <string>
class Account{
public:
    // Default constructor
	Account():AccountName("None"), AccountNumber(0), type(""), Balance(0.0) {}
		// Parameterized constructor
	Account(string cardName, int accountNumber, string Type, float balance) : AccountName(cardName), AccountNumber(accountNumber), type(Type), Balance(balance) {}
    // Class functions
	void deposit() {
		float money;
		cout << "Deposit >> ";
		cin >> money;
        if (money>0){
		    Balance += money;
            cout<<"Done Deposit"<<endl;}
	}
	void withdraw() {
		float money;
		cout << "Withdraw >> ";
        cin >> money;
        if (money>0 && Balance >= money){
		    Balance -= money;
            cout<<"Done withdraw!"<<endl;}
	}
    // Overload relational operators for the Account class
	bool operator==(Account &user) {
		return AccountNumber == user.AccountNumber;
	}
	bool operator>(Account &user) {
        return Balance > user.Balance;
	}
	// Overload the stream insertion(<< ) and extraction(>> ) operators for the Account class :
	friend ostream& operator<<(ostream& COUT, Account& user);
	friend istream& operator>>(istream& CIN, Account& user);

private: // Class members
	string AccountName;
	int AccountNumber;
	string type;
	float Balance;
};
// the stream insertion (<<) operator  
ostream& operator<<(ostream& COUT, Account& user) {
	cout<<"\nOutput the account details!"<<endl;
	COUT << "Account Name : " << user.AccountName << endl << "Account Number : " << user.AccountNumber<<endl<< "Type of card : " <<user.type<<endl << "Balance : " << user.Balance << endl;
	return COUT;
}
// the stream extraction (>>) operator
istream& operator>>(istream& CIN, Account& user) {
	cout<<"\nInput the account details!"<<endl;
	cout << "Account Name : ";
	CIN >> user.AccountName;
	cout << "Account Number : ";
	CIN >> user.AccountNumber;
	cout << "Type of card (Humo, Uzcard, Visa) : ";
	CIN >> user.type;
	cout << "Balance : ";
	CIN >> user.Balance;
	return CIN;
}
