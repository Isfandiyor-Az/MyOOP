#include <iostream>
#include <string>
using namespace std;

class English_ATM{
    public:
    void show_balance(double balance){
        cout<<endl;
        cout<<"Your balance is $"<<balance<<endl;
    }
    double deposit(){
        int money;
        cout<<"Enter the amount to deposit: ";
        cin>>money;
        return money; 
    }
    double withdraw1(double balance){
        double withdraw;
        cout<<"Enter the amount to withdraw: ";
        cin>>withdraw;
        if (balance >=withdraw){
            cout<<"Here is your $"<<withdraw<<endl;
            return withdraw;
        }
        else if (balance <= 0){
            cout<<"Balance should be greater than 0"<<endl;
            return 0;
        }
        else{cout<<"Insufficient Balance!"<<endl;
            return 0;}
    }
    int change_Pincode(){
        int new_Pin;
        string msg;
        cout<<"\nIs your card Name is "<<cardName <<" (Yes or No) >> ";
        cin>>msg;
        if (msg=="Yes" || msg=="yes" || msg=="YES") cout<<"\nOkey!"<<endl;
        else{
            cout<<"Don't lie!"<<endl;
            return 0;
        }
        cout<<"\nWanna change your Pin Code >> ";
        cin>>msg;
        if (msg=="Yes" || msg=="yes" || msg=="YES"){
            cout<<"Enter a new one >> ";
            cin>>new_Pin;
            pinCode = new_Pin;
            cout<<"Your Pin Code has updated successfully"<<endl;
            return 0;
        }
        return 0;

    }
    void english(){
        double balance = 0.0;
        bool is_running = true;
        int choose_op;
        while(is_running){
            cout<<"\n"
"+---------------------------------------------------+\n"
"|                                                   |\n"
"|            WELCOME BACK TO THE ATM!               |\n"
"|                                                   |\n"
"+---------------------------------------------------+\n"
"|                                                   |\n"
"|   1. Check Balance                                |\n"
"|   2. Deposit                                      |\n"
"|   3. Withdraw Cash                                |\n"
"|   4. Change Pincode                               |\n"
"|   5. Exit                                         |\n"
"+---------------------------------------------------+\n";
        cout<<"Enter your choice (1-4): ";
        cin>>choose_op;
        if (choose_op == 1) show_balance(balance);
        else if (choose_op == 2) balance += deposit();
        else if (choose_op == 3) balance -= withdraw1(balance);
        else if (choose_op == 4) change_Pincode();
        else if (choose_op == 5){
            is_running = false;
            cout<<"\n"
            "+---------------------------------------------------+\n"
            "|                                                   |\n"
            "|            THANKS FOR USING OUR ATM!              |\n"
            "|                                                   |\n"
            "+---------------------------------------------------+\n";}
        else cout<<"\nThis is not a valid choice!"<<endl;
}
    }
    English_ATM(){
        cardName = "Noname";
        pinCode = 0000;
    }
    English_ATM(string Name,int Code){
        cardName = Name;
        pinCode=Code;}
    private:
    string cardName;
    int pinCode;
};