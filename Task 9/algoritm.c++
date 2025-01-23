#include <iostream>
using namespace std;

// array
void sumof_two_dimension_array(int arr[2][3],int res=0){
    for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            res +=arr[i][j];
        }
        cout<<"The sum of "<<i<<" row is "<<res<<endl;
        res =0;
    }
}

int main(){
    cout<<"Enter two dimension array!"<<endl;
    int arr[2][3];
    for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            cin>>arr[i][j];
        }
    }
    sumof_two_dimension_array(arr);
    return 0;
}