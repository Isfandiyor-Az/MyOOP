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
        int PinCode1;string CardName1;
        cout<<"\nВведите ваш Пин код: ";
        cin>>PinCode1;
        cout<<endl;
        cout<<"Введите ваш Имя карта: ";
        cin>>CardName1;
        Russian_ATM account1(CardName1,PinCode1);
        account1.russian();
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