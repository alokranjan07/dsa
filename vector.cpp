#include<iostream>
#include<vector>
using namespace std;
int main(){
//creation 
// vector<int>marks;
//with size
// vector<int>price;
// vector<int>kms(20);
//with default values in all
// vector<int>pages(10,0);
//10 is the size of vector and 0 is the value in all 10 indexes

//min size 
// marks.reserve(10) ;

//inserting elements in vector 
// marks.push_back(10);
// marks.push_back(20);
// marks.push_back(30);
// cout<<marks.size()<<endl;

//remove the last element 
// marks.pop_back();
// cout<<marks.size()<<endl;

//print the first element
// cout<<marks.front()<<endl;

//print the last element
// cout<<marks.back()<<endl;

// if(price.empty()){
//     cout<<"true"<<endl;
// }
// else{
//     cout<<"false"<<endl;
// }
//only access when the vector size is defind
// cout<<marks[0]<<endl;


//size of vector
// cout<<marks.size()<<endl;

//capacity of the vector element can be stored 
// cout<<marks.capacity()<<endl;

//erasing in the vector

// marks.erase(marks.begin(),marks.end());
//  cout<<marks.size();



//if you assigned the size  while creating and dont pushback the values 
//let say size is 10 and you have pusehed 3 values it will show 0 00
 vector<int>first;
 vector<int>second;

 first.push_back(10);
 first.push_back(20);
 first.push_back(30);
 first.push_back(25);

 second.push_back(100);
 second.push_back(200);
 second.push_back(300);
 second.push_back(400);

 first.swap(second);
 cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<" "<<first[3]<<endl;

 for(int i:first){
    cout<<i<<" ";
 }

 vector<int>::iterator it=first.begin();

 while(it != first.end()){
    cout<< *it<<endl;
    it++;
 }


 //creating 2d vector

 vector<vector<int>> brr(4,vector<int>(3,0));
 // above is the vector with rows 4 and and columns 3 with 0 values 

 //row can be found by crr.size();
 int totalrows=brr.size();
 cout<<totalrows<<endl;
 //jaggered vector

 vector<vector<int>> crr(5);
 crr[0]=vector<int>(2);
 crr[2]= vector<int>(3);

 crr[1]=vector<int>(2);
 crr[3]=vector<int>(6);
 crr[4]=vector<int>(1);

 cout<<crr.size()<<endl;

 //for ith colums size
 cout<<crr[1].size()<<endl;

 






    return 0;
}