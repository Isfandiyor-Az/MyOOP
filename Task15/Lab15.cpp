#include <iostream>
using namespace std;


class Sample{
int x;
int y;
public:
Sample(int x1,int y1){
    x=x1;y=y1;
}
void Display()const{
    cout<<x<<y<<endl;
}
};
int main()
{
    const Sample p1(10,20);
    p1.Display()
    return 0;
} 
