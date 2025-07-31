#include<iostream>
#include<queue>
using namespace std;
int main(){

    //creation of queue
    queue<int>q;

    //insertion
    q.push(10);
    //10
    q.push(20);
    //10->20
    q.push(30);
    //10->20->30

    cout<<q.size()<<endl;

    q.pop();
    cout<<q.size()<<endl;

    cout<<q.front()<<endl;
   cout<<q.back()<<endl;

   queue<int>first;
   queue<int>second;

   first.push(20);
   first.push(30);

   second.push(40);
   second.push(50);

   first.swap(second);

   cout<<"front element of first is:";
   cout<<first.front()<<endl;
 



    return 0;


}