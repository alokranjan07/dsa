#include<iostream>
#include <deque>


using namespace std;
int main(){
    //creating dequeue

    deque<int>dq;

      //push_back
  dq.push_back(100);
  dq.push_back(200);
  dq.push_back(300);

   //pushfront
  dq.push_front(200);

  //size of dequeue
  cout<<dq.size()<<endl;

  cout<<dq.back()<<endl;

  //pop 
   dq.pop_back();

   //back
   dq.back();



 

   




}