#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;


int main(){

unordered_map<string ,string>table;

//insertion
table["in"]="india";

//or 
table.insert(make_pair("en","england"));

//creating pair
pair<string,string> p;
p.first="br";
p.second="brazil";
table.insert(p);
//size of unordered map

cout<<table.size()<<endl;
//clearing all enteries of map
 //table.clear();

 cout<<table.size()<<endl;

 //checking table is empty or not 

 if(table.empty()==true){
    cout<<"map is empty"<<endl;
 }
 else{
    cout<<"table is not empty"<<endl;
 }
 //modifying value in map
table.at("in")="india3";
cout<<table.at("in")<<endl;


//or 
table["in"]="india4";
cout<<table.at("in")<<endl;


}