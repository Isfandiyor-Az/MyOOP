#include <iostream>
using namespace std;
#include <string>

class Account{
    private:
    string AccountName;
    int PinNumber;
    public:
    Account(string a,int b){
        AccountName = a;
        PinNumber = b;
    }
    void Display(){
        cout<<"Account Name is "<<AccountName<<endl;
        cout<<"Pin Password is "<<PinNumber<<endl;
    }
};

class Balance{
    private:
    int Withdrawal;
    int Deposite;
    int BalanceInquiry;
    public:
    Balance(int a, int b,int c){
        Withdrawal = a;
        Deposite=b;
        BalanceInquiry=c;
    }
    void Show(){
        cout<<"Withdrawal is "<<Withdrawal<<endl;
        cout<<"Deposite is "<<Deposite<<endl;
        cout<<"Balance Inquiry is "<<BalanceInquiry<<endl;
    }  
};

class ATM {
    private:
    Account account1;
    Balance balance1;
    public:
    void printvalue(){
        account1.Display();
        balance1.Show();
    }
    ATM(Account a,Balance b): account1(a),balance1(b){}
};

int main(){
    Account p1("Isfandiyor",1234);
    Balance p2(100,0,10);
    ATM output(p1,p2);
    output.printvalue();
    return 0;
}