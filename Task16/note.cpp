#include <iostream>
using namespace std;

class item{
    int code;
    int price;
    public:
    void getdata(int a,int b){
        code = a;
        price = b;
    }
    void show(){
        cout<<code<<endl;
        cout<<price<<endl;
    }
};
int main(){
    const int size = 3;
    item *p=new item[size];
    for(int x )

    return 0;
}