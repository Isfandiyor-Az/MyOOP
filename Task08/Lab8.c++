#include <iostream>
using namespace std;

// Exe 1
inline int tripleByValue(int value){
    return value*value*value;
}
inline void tripleByReference(int &value){
    value = value*value*value;
}

// Exe 2
int isolated(int num){
    int sum=0;
    while(num !=0){
        int temp = num % 10;
        sum +=temp;
        num /=10;
    }
    return sum;
}
int sum_digits(int start,int stop){
    int sum=0;
    for(start;start<=stop;start++){
        if (start<=9)
            sum +=start;
        else
            sum+=isolated(start);
    }
    return sum;
}

int gcd(int,int); // function prototype!
int main(){
    // Exe 1
    int value=3;
    cout<<tripleByValue(value)<<endl;
    tripleByReference(value);
    cout<<value<<endl;

    // Exe 2
    cout<<sum_digits(10,15)<<endl;

    // Exe 3
    cout<<gcd(54,24)<<endl;
    return 0;
}
int gcd(int m,int n){
    if (m<n){int temp =m;
        m = n;
        n = temp;}
    int rem = m % n;
    if (rem == 0)
        return n;
    return gcd(n,rem);
}
