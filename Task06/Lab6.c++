#include <iostream>
using namespace std;
// Exe 1
float average(float start,float stop){
    float avr=0;
    for(start;start<=stop;start++)
        avr +=start;
    return avr / stop;
}

// Exe 2
int reversed(int value){
    int res=0;
    while (value !=0 ){
        int temp = value % 10;
        res = res*10+temp;
        value /=10;
    }
    return res;
}

// Exe 3
int celsius(int);
int fahrenheit(int);
void printTemp();
int main(){
    // Exe 1
    cout<<"The average is "<<average(1.0f,10.0f)<<endl;
    
    // Exe 2
    cout<<"Before "<<7631<<endl<<"After "<<reversed(7631)<<endl;

    // Exe 3
    printTemp();
     return 0;
}
int celsius(int fahrenheit){
    return ((fahrenheit-32)*5)/9;
}
int fahrenheit(int celsius){
    return (celsius*9)/5+32;
}
void printTemp(){

    cout<<"Celsius\t\t"<<"Fahrenheit"<<endl;
    for(int c=0;c<=100;c++)
        cout<<c<<"\t\t"<<fahrenheit(c)<<endl;
    cout<<endl;
    cout<<"Fahrenheit\t"<<"Celsius"<<endl;
    for(int f=32;f<=212;f++)
        cout<<f<<"\t\t"<<celsius(f)<<endl;
}