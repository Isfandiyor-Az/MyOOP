#include <iostream>
using namespace std;

int main(){
    // Exe 1
    int largest=0,counter=0,number;
    for (counter;counter<10;counter++){
        cout<<"Enter sale #"<<counter+1<<": ";
        cin>>number;
        if (number>largest)
            largest=number;
    }
    cout<<"The largest sale is "<<largest<<endl;

    // Exe 2
    cout<<"N"<<"\t"<<"10*N"<<"\t"<<"100*N"<<"\t"<<"1000*N"<<endl<<endl;
    for (int i = 1; i <= 5; i++)cout<<i<<"\t"<<i*10<<"\t"<<i*100<<"\t"<<i*1000<<endl;
    
    // Exe 3 
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    // Exe 4
    for(int i=1;i<=5;i+=1){
        for(int x=1;x<=5-i;x++)
            cout<<" ";
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}