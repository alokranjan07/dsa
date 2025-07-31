#include<iostream>
using namespace std;

//class -has constructor helps in creating object ,
//class is basically template 
//destructor 
//class has some attributes and behavior


class Student{
    //public accessfier used for public that is accessed by everyone

    public:
    //attributes
    int id;
    int age;
    string name;
    int nos;

    //constructor 

    Student(){
        cout<<"default constructor"<<endl;

    }
    //behavior  //methods //functions
    void study(){
        cout<<this->name <<" "<<"is "<<"studing"<<endl;

    }
    void sleep(){
        cout<<this ->age<<"sleeping"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }
    //destructor
    ~Student(){
        cout<<"this is destructor"<<endl;
    }

};
int main(){
    Student A;
    A.age=4;
    A.sleep();




}