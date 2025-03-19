#include <iostream>
#include <string>
using namespace std;

class Student{
    protected: //   Attributes
    int ID;
    string Name;
    string school;
    int GroupNumber;
    Student(int id,string name,string School,int groupnumber){ // Constractor with parameters
        ID=id;
        Name=name;
        school=School;
        GroupNumber=groupnumber;} 
};

class Test : public Student{// Test inheriting from the Student class
    protected: // protected members
    int Physics;
    int OOP;
    int English;
    public:
    Test(int id,string name,string School,int groupnumber,int phy,int oop,int eng):Student(id,name,School,groupnumber){// Constractor with parameters
        Physics = phy;
        OOP = oop;
        English = eng;
    }
};
class Result:public Test{ // Test inheriting from the Student class
    int Total; // private members
    float GPI;
    public:
    Result(int id,string name,string School,int groupnumber,int p_m,int o_m,int e_m):Test(id,name,School,groupnumber,p_m,o_m,e_m){// Constractor with parameters
        Total = p_m+o_m+e_m;    
        GPI = (p_m+o_m+e_m)/3;}

    void Display(){ // member function
        cout<<"ID is U"<<ID<<endl;
        cout<<"Name is "<<Name<<endl;
        cout<<"School is "<<school<<endl;
        cout<<"GroupNumber is "<<GroupNumber<<endl;
        cout<<"Physics mark is "<<Physics<<endl;
        cout<<"OOP mark is "<<OOP<<endl;
        cout<<"Total is "<< Total<<endl;
        cout<<"Gpi is   "<< GPI<<endl;
    }
};
int main(){
    Result s1(2410047,"Isfandiyor","INHA",2,100,100,100);
    s1.Display();
    return 0;
}