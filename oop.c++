#include<iostream>
#include<string>
using namespace std;

class Teacher {

    private:
    double salary;
    //if we want to access this private propperites then 
    //we make some methods in public 
public:
//constructor 
 
//it automatically calls the when object is created 
//its main function is to intialsie the object 
//contruvctor  is created both compiler and user
//called once when object is created 
//creted always public  
    // Teacher(){
     //cout <<"constructor"<<endl;
    //}
    Teacher(  ){
        string  dept="c++";
    }
    // properties
    string name;
    string dept;
    string subject;
   

    // method
    // void changeDepartment(string newDep) {
    //     dept = newDep;
    // }
    //setter method to set private methods
    void setsalary(double s){
        salary= s;

    }
    int getSalary(){
        return salary;
    }

};


//encapsulation 
//wrapping of data and methods in a single unit class
class Account{
    private:
    double balance;
    string password; //data hiding
    public:
    string account;
    string namae;

};



int main() {
    Teacher t1;
    
    t1.name = "alok";
    t1.dept ;  // fixed missing value
    t1.subject = "Physics";
    t1.setsalary(2000);
    
    

    //t1.changeDepartment("Math");

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout<<"salary"<<t1.getSalary()<<endl;
  

    return 0;
}