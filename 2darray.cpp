#include<iostream>
using namespace std;

void rowSum(int arrr[][3],int rowsize,int colsize){
    for(int row=0;row<=rowsize;row++){
        int sum=0;
        for(int col=0;col<=colsize;col++){
  sum=sum+arrr[row][col];       
 }
 cout<<"rowwise sum"<<sum<<endl;

    }
 

}
int main(){
    //creation 
    //decalartion of 2d array
    //int arr[2][3];
     //intialisation of array
     int arr[2][3]={
        {2,3,4},{3,4,5}
     };
     cout<<arr[1][1];

     int arrr[2][3]={
        {2,3,4},
        {3,2,1}
     };
    int  rowsize=2;
    int colsize=2;

  rowSum( arrr,rowsize,colsize);
}