// Azimboyev Isfandiyor U2410047
// Lab 2
#include "Main.h"
using namespace std;
int main(){
    // Create 3 objects
    Book book1(1,"Atomic Habits","Nasa Albert",50.0); 
    Book book2(2,"Attention","Talib Nasim",150.0);
    Book book3(3,"Mohirdev","I don't know",250.0);
    // Display Output
    book1.Display();
    book2.Display();
    book3.Display();
    return 0;
}