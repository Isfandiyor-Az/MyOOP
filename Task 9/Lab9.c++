#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int arr[2][3],sum=0;
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            cin>>arr[r][c];
        }
    }
    cout<<"Display the array:"<<endl;
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            sum +=arr[r][c];
        }
        cout<<"Sum of the"<<r<<"is "<<sum<<endl;
        sum=0;
    }
    return 0;
}