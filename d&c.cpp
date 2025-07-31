#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>>

using namespace std;

//merging two sorted arrays

void  mergeSortedArray(int arr1[],int arr2[],int size1,int size2,vector<int>&output){
 //steps 1 intilaise i and j
int i=0;
int j=0;

//steps 2 comparision
while(i<size1&&j<size2){
   if(arr1[i]<arr2[j]){
    output.push_back(arr1[i]);
    i++;

   }
   else{
    output.push_back(arr2[j]);
    j++;
   }

}
}
//copying data 
while()




int main(){
    int arr1[]={2,3,4,5,6,7};
    int size1=6;
    int arr2[]={9,10,11};
    int size2=3;
    vector<int>output;

    //merging two sorted arrays

    mergeSortedArray(arr1,arr2,size1,size2,output);
    
   
    
    return 0;
}