#include <iostream>
using namespace std;
#include <string>

void rectangle(int *a,int *b){
    *a=*a*(*b);
}
void swap(string* str1,string* str2){
    string temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
int main(){
    // Task 1
    int a,b;
    cout<<"Enter two sides of rectangle : ";
    cin>>a>>b;
    rectangle(&a,&b);
    cout<<"The area of a rectangle is "<<a<<endl;

    // Task 2

    string str1,str2;
    cout<<"Enter two strings : ";
    cin>>str1>>str2;
    swap(&str1,&str2);
    cout<<str1<<" "<<str2<<endl;

    // Task 3

    
    return 0;
}