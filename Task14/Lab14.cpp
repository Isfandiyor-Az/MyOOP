#include "Header.h"

int main(){
    int chose_lan;
    cout<<
"+---------------------------------------------------+\n"
"|                                                   |\n"
"|                 Welcome to ATM                    |\n"
"|                                                   |\n"
"+---------------------------------------------------+\n"                                                        
"|      1.English                                    |\n"
"|      2.Russian                                    |\n"
"|      3.Uzbek                                      |\n"
"+---------------------------------------------------+\n";
    cout<<"SELECT YOUR LANGUAGE: ";
    cin>>chose_lan;
    if (chose_lan == 1) {
        int PinCode;string CardName;
        cout<<"\nEnter your PinCode >> ";
        cin>>PinCode;
        cout<<endl;
        cout<<"Enter your CardName >> ";
        cin>>CardName;
        English_ATM account1(CardName,PinCode);
        account1.english();
    }
    else if (chose_lan == 2){
        cout<<"0";
    }
    else if (chose_lan == 3){
        cout<<"o";}
    else{
        cout<<
        "+---------------------------------------------------+\n"
        "|                                                   |\n"
        "|          ENTER ONE OF THE GIVEN LANGUAGES!        |\n"
        "|                                                   |\n"
        "+---------------------------------------------------+\n";}

    system("pause");
    return 0;
}