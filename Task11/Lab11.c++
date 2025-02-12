#include <iostream>
using namespace std;
#include <string>
class Rectangle{
    double base;
    double height;
    public:
    void set(int a){
        base = a;
    }
    void set1(int b){
        height =b;
    }
    int get(){
        return base * height;
    }
};
int main(){
    Rectangle area;
    area.set(10);
    cout<<area.get()<<endl;


    return 0;
}