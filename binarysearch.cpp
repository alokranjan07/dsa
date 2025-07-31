#include<iostream>
using namespace std;

void binarySearch(int arr[],int start,int end,int target,int size){
    cout<<"n=binarySearch";
    int mid=end-(start+end/2);
    int i=0;
while (start<end)
{
    if(target==arr[mid]){
        cout<<"target found";
        cout<<arr[mid];

    }
    //if target is less than mid it is in left of mid
    else if(target<arr[mid]){
         end=arr[mid]-1;
        cout<<end;

    }
    //if target is greater than the mid it is in the right of the mid
    else{
        end=arr[mid]+1;
        cout<<end;

    }
    i++;
    
}


};

int main(){
    int arr[]={3,4,5,6,7,8};
    int size=6;
    int start=0;
    int end=size-1;
    int target=7;
    binarySearch(  arr,  start,  end, target,size);




    return 0;

}