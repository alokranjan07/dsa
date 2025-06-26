#include<iostream>
#include<list>
using namespace std;
int main(){

    //creation 
    list<int>myList;

    //insertion
    myList.push_back(20);
    myList.push_back(10);
    myList.push_back(30);

    myList.push_front(100);
    myList.pop_back();
    myList.pop_front();

    cout<< myList.size()<<endl;

    myList.clear();
    cout<< myList.size()<<endl;
    myList.push_front(200);
    myList.push_back(300);

   cout<< myList.front()<<endl;
   cout<<  myList.back()<<endl;

   //creating iterator

   list<int> ::iterator it=myList.begin();

   while(it !=myList.end()){
      cout<<*it<<endl;;
      it++;
   }






    return 0;
}