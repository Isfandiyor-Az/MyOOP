#include <iostream>
using namespace std;

int main(){
    // Exe 1
    int salary;
    cout<<"Enter your monthly salary : ";
    cin>>salary;
    if (salary <=2000) 
        cout<<"no tax"<<endl<<"Income + tax is $"<<salary<<endl;
    if (salary >=2001 && salary<=3000)
        cout<<"Your tax is around $"<<salary*0.2<<endl<<"Income + tax is $"<<(salary*0.2)+salary<<endl;
    if (salary >=3001 && salary<5000)
        cout<<"Your tax is around $"<<salary*0.3<<endl<<"Income + tax is $"<<(salary*0.3)+salary<<endl;
    if (salary > 5000)
        cout<<"Your tax is around $"<<salary*0.4<<endl<<"Income + tax is $"<<(salary*0.4)+salary<<endl;
    // Exe 2
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if (num % 2==0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;  
    // Exe 3
    int hardness,carbon,tensile;
    cout<<"Enter hardness is ";
    cin>>hardness;
    cout<<"Enter carbone is ";
    cin>>carbon;
    cout<<"Enter tensile is ";
    cin>>tensile;
    
    if (hardness > 50 && carbon <0.7 && tensile > 5600)
        cout<<"Your Grade is 10"<<endl;
    else if (hardness > 50 && carbon <0.7 && tensile < 5600)
        cout<<"Your Grade is 9"<<endl;
    else if (hardness < 50 && carbon <0.7 && tensile > 5600)
        cout<<"Your Grade is 8"<<endl;
    else if (hardness < 50 && carbon >0.7 && tensile > 5600)
        cout<<"Your Grade is 7"<<endl; 
    else if (hardness > 50 || carbon <0.7 || tensile > 5600)
        cout<<"Your Grade is 6"<<endl;
    else
        cout<<"Your Grade is 6"<<endl;
    return 0;
}