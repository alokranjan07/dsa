#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<limits.h>
 
using namespace std;

//factorial using recursion 
//in recurion ek case solve karo baaki recusion khud krega




// int factorial(int n){

// if(n==1) return 1;
// int reckans=  factorial(n-1);
// return  n* reckans;
// }



//int counttail
//  void countTail(int current,int n){
//     if(current>n)  return;

//     cout<<current<<endl;
//     countTail(current+1,n);
    

// }




//count by head

//  void countHead(int n){
//     if(n==0) return;
//     countHead(n-1);
//     cout<<n<<endl;

// }

//print hello 5 times
// void printHello(int n){
//     if(n==0) return;
//      cout<<"hello" <<endl;
//     printHello(n-1);
   
// }

//printing array by recursion


// void printArray(int arr[],int size,int index){

//     if(index>=size){
//          return;}
//     cout<<arr[index]<<" ";
//     printArray(arr,size,index+1);

// }

//printing reverese of an array

// void printRev(int arr[],int size){
//     if(size==0){
//         return;
//     }
//     cout<<arr[size-1]<<" ";
//     printRev(arr,size-1);
// }


//search in an array
// void  printSearch(int arr[],int size,int index,int target){
//     if( index>=size){
//         return;
//     }
//     if(arr[index]==target){
//         cout<<"found";
//     }
//      printSearch(arr,size, index+1,target);
// }


//find mini element
// void printMax(int arr[],int size ,int index,int &maxi){
//     if(index>=size){
//         return;
//     }
//    maxi=max(maxi,arr[index]);
//     printMax(arr,size,index+1,maxi);
    
// }

//finding odd
// void printODD(int arr[],int size,int index){
//     if(index>=size){
//         return ;
//     }

//     if((arr[index] & 1) !=0){
//         cout<<"odd"<<" ";

//     }
//     printODD(arr,size,index+1);

// }

//findeven 
// void isEven(int arr[],int size,int index){
//     if(index>=size){
//         return;
//     }
//     if((arr[index] &1)==0){
//         cout<<"even"<<" ";
//     }
//     isEven(arr,size,index+1);
// }


//binary seacrh using recusrion

 #include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {
    if (start > end) {
        return -1;  // Element not found
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
        return mid;
    }
    if (arr[mid] > target) {
        return binarySearch(arr, start, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, end, target);
    }
}





int main(){
//    int result= factorial(5);
//    cout<<result<<endl;


// int n=5;
// int current=1;
// countTail(current,n);


//  countHead(5);


//printHello(6);

int size=6;
int index=0;


int arr[]={3,4,5,67,7,8};
 int target=5;

//int maxi=INT_MIN;
// printArray(arr,size,index);
//printRev(arr,size)
 
//printSearch(arr,size,index,target);

// printMax(arr,size,index,maxi);
// cout<<maxi;

// printODD(  arr,size,index);
//   isEven(arr,size,index);
 int start=0;
int end=size-1;
 
 int search=binarySearch( arr ,start, target,  end);
 cout<< search;

 


 return 0;

}