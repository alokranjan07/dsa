#include<iostream>
#include<queue>

using namespace std;
int main(){

    //max heap  priority queue
    //highest element has max priority
    //top element is always the max priority one 
    //and max priority will pop first
    priority_queue<int> pq1;

    pq1.push(10);
    pq1.push(20);
    pq1.push(30);

    //top // max priority element
    pq1.top();
    //pop of pq1 removes the highest element

    pq1.pop();

    //size of priority queue
    pq1.size();
    

    //checking pq empty or not 
    if(pq1.empty()==true){
        cout<<"pq1 is empty";
    }
    else{
        cout<<"pq1 is not empty";
    }


    //min heap priority queue
    //here min value has more priority than others in 

    priority_queue<int ,vector<int>,greater<int>> pq;
  
    //insertion in pq
    pq.push(10);
    pq.push(20);
    pq.push(5);

    //size of pq
    cout<<pq.size();

    //top which is the highest priorty and has min value

    cout<<pq.top()<<endl;

    pq.pop();





}