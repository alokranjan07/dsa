#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void  solveString(string s,int index,string output,vector<string>&ans){
    //2kaam rukna kab h aur 
    //subsequnce ready hoti iss time pr 
    if(index>=s.length()){
        ans.push_back(output);
        return;
    }
    
    // 1 case solve kr denge 


    char ch=s[index];

    //include
    solveString(s,index+1,output+ch,ans);
    //exclude 
    //send as it is not add anything 
     solveString(s,index+1,output,ans);


}

vector<string> generateAllSubsequence(string s){
    vector<string> ans;
    int index=0;
    string output="",
   
    solveString(s,index,output,ans);

     sort(ans.begin(),ans.end());
     return ans;
}





int main(){
    string s="abc";
    
    generateAllSubsequence(s);



}