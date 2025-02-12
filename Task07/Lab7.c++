#include <iostream>
#include <cmath> // sqrt() for using  square root
using namespace std;


// Exe 1
int area(int a,int b){
    return a*b;
}
float area(float a,float b,float c){
    float s = (a+b+c)/2;
    return sqrt((s*(s-a)*(s-b)*(s-c)));
}
double area(double a){
    return a*a;
}

// Exe 2
int qualityPoints(int average){
    if (100 >= average && average >=90 )
        return 4;
    if (89 >=average && average >= 80)
        return 3;
    if (79 >=average && average >= 70)
        return 2;
    if (69 >=average && average >= 60)
        return 1;
    if (60 >=average)
        return 0;
}

// Exe 3
template <typename T>
T maximum(T num1,T num2){
    T max=num1;
    if(num2 >max)
        max = num2;
    return max;
}
template <class T>
T minimum(T num1,T num2){
    T min=num1;
    if(min >num2)
        min = num1;
    return min;
}    
int main(){
    // Exe 1
    cout<<"The area of the rectangle is "<<area(5,4)<<endl;
    cout<<"The area of the triangle is "<<area(3.61f,3.61f,4.0f)<<endl;
    cout<<"The area of the Square is "<<area(5.1)<<endl;

    // Exe 2
    cout<<"Your GPA is "<<qualityPoints(86)<<endl;

    // Exe 3
    cout<<"The maximum is "<<maximum<int>(10,20)<<endl;
    cout<<"The minimum is "<<minimum('A','I')<<endl;
    cout<<"The maximum is "<<maximum<double>(4.5,3.21)<<endl;
    return 0;
}