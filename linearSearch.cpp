#include<iostream>
using namespace std;


void linearSearch(int arr[],int size,int target){
    for (int i=0;i<size;i++){

        if(arr[i]==target){
            cout<<"target is found" <<endl;
            cout<<arr[i];
        }
         
    }
    cout<<"target not found";
}
int main(){
       int arr[]={2,3,4,5,6,7};
       int size=6;
  
       int target =10;



     linearSearch( arr, size, target);
    return 0;
}
