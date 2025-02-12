#include <iostream>
using namespace std;

int main(){
    // Exe 1
    int i=1;
    while (i <=15){
        if (i % 2 !=0)
            cout<<i<<endl;
            i++;
    }
    // Exe 2
    int m,n,total=0;
    cout<<"Enter two numbers :";
    cin>>m>>n;
    for(m; m <= n ; m++)total +=m;
    cout<<"The result is "<<total<<endl;

    // Exe 3
    int num1,num2;
    char op;
    cout<<"Enter a number : ";
    cin>>num1;
    cout<<"Enter an operator : ";
    cin>>op;
    cout<< "Enter another number : ";
    cin>>num2;
    switch (op){
    case '+':
        cout<<"Outcome is "<<num1+num2<<endl;break;
    case '-':
        cout<<"Outcome is "<<num1-num2<<endl;break;
    case '*':
        cout<<"Outcome is "<<num1*num2<<endl;break;
    case '/':
        cout<<"Outcome is "<<num1/num2<<endl;break;
    default:
        cout<<"Enter only (+-*/)"<<endl;break;
    }

    // Exe 4
    int num = 123,sum;  
    while (num !=0){
        int cal = num % 10;
        sum +=cal;
        num /=10;
    }
    cout<<sum<<endl;
    return 0;
}