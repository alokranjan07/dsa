#include<iostream>
using namespace std;


void   inputArray(int arr[],int size){
    int i=0;

    while(i<size){
        cin>>arr[i];
        i++;
    }   
}

void  printArray(int arr[],int size){
    int i=0;
    while(i<size){
       cout<<"elements in array are :";
        cout<<arr[i]<<endl;
        i++;
    }
    }
   int deletionArray(int arr[],int &size,int pos){
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        --size;

   for(int i=0;i<size;i++){
            cout<<"element is deleted";
            cout<<arr[i]<<endl;
        }
    }

int main(){
    int size;
    cout<<"input size of array";
    cin>>size;
    int arr[size];
    int choice;
    cout <<"enter 1 for inputArray" <<endl;
    cin>>choice;
    
    int pos;
    cout<<"enter positon to delete ";
    cin>>pos;

   
    
    switch(choice){

        case 1: 
        cout<<"enter elements in array";
        inputArray(arr,size);
        break;
        case 2:  printArray(arr,size);
        break;
         
        case 3:deletionArray(arr,size,pos);
    }
    
   
    
    return 0;
}