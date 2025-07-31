#include<iostream>
using namespace std;
int main(){
    int a=5;
    //int val=(++a)*(a++)+(--a)*(a--);
    int val=(--a)*(a--);
    cout<<(val);
}