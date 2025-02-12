// Isfandiyor Azimboyev U2410047
// Lab 1

#include <iostream>
#include <string>
using namespace std;

class Property{
    int propertyId;
    string propertyName;
    int propertyValue;
    public:
    void setPropertyId(int id){
        propertyId = id;
    }
    void setPropertyName(string name){
        propertyName = name;
    }
    void setPropertyValue(int value){
        propertyValue = value;
    }

    int getPropertyId(){
        return propertyId;
    }
    string getPropertyName(){
        return propertyName;
    }
    int getPropertyValue(){
        return propertyValue;
    }
};
int main(){
    Property student1;
    student1.setPropertyId(2410047);
    student1.setPropertyName("Isfandiyor");
    student1.setPropertyValue(18);

    cout<<"Id : "<<student1.getPropertyId()<<" Name : "<<student1.getPropertyName()<<" Value : "<<student1.getPropertyValue()<<endl;

    return 0;
}