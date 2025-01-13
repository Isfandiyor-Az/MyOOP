#include <iostream>
using namespace std;
#include <cmath>
int main(){
    // Exe 1
    int num1,num2,num3; 
    cout<<"Enter three numbers : ";
    cin>>num1>>num2>>num3;

    cout<<"The sum is "<<num1+num2+num3<<endl;

    cout<<"The average is "<<(num1+num2+num3)/3<<endl;

    cout<<"The product is "<<num1*num2*num3<<endl;
    
    if (num1>num2 && num1>num3)
        cout<<"The largest is "<<num1<<endl;
    if (num2>num3 && num2>num1)
        cout<<"The largest is "<<num2<<endl;
    if (num3>num2 && num3>num1)
        cout<<"The largest is "<<num3<<endl;
    if (num1<num2 && num1<num3)
        cout<<"The smallest is "<<num1<<endl;
    if (num2<num3 && num2<num1)
        cout<<"The smallest is "<<num2<<endl;
    if (num3<num2 && num3<num1)
        cout<<"The smallest is "<<num3<<endl;
        
    // Exe 2
    cout<<"Integer"<<"\t"<<"Square"<<"\t"<<"Cube"<<endl;
    cout<<0<<"\t"<<pow(0,2)<<"\t"<<pow(0,3)<<endl;
    cout<<1<<"\t"<<pow(1,2)<<"\t"<<pow(1,3)<<endl;
    cout<<2<<"\t"<<pow(2,2)<<"\t"<<pow(2,3)<<endl;
    cout<<3<<"\t"<<pow(3,2)<<"\t"<<pow(3,3)<<endl;
    cout<<4<<"\t"<<pow(4,2)<<"\t"<<pow(4,3)<<endl;
    cout<<5<<"\t"<<pow(5,2)<<"\t"<<pow(5,3)<<endl;
    cout<<6<<"\t"<<pow(6,2)<<"\t"<<pow(6,3)<<endl;
    cout<<7<<"\t"<<pow(7,2)<<"\t"<<pow(7,3)<<endl;
    cout<<8<<"\t"<<pow(8,2)<<"\t"<<pow(8,3)<<endl;
    cout<<9<<"\t"<<pow(9,2)<<"\t"<<pow(9,3)<<endl;
    cout<<10<<"\t"<<pow(10,2)<<"\t"<<pow(10,3)<<endl;

    // Exe 3
    int total_km,per_gasoline,average_km;
    cout<<"Total km driven per day : ";
    cin>>total_km;
    cout<<"Cost per liter of gasoline : ";
    cin>>per_gasoline;
    cout<<"Average km per liter : ";
    cin>>average_km;
    cout<<"Total cost per day is "<<(total_km/average_km)*per_gasoline<<"$"<<endl;
    
    return 0;
}