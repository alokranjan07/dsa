#include<iostream>
#include<limits.h>
#include<string>
#include<vector>
#include<stack>
using namespace std;


class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int value){
     data =value;
     left=NULL;
     right=NULL;
    }
};

Node* buildTree(){
    int value;
    cin>>value;
    if(value==-1){

    return NULL;

    }
    else{
        Node* root=new Node(value);
           root-> left=buildTree();
           root->right=buildTree();
           return root;

        

    }
}

//preorder NLR
void preorderTraversal(Node*root){
    //base case 
    if(root==NULL){
     return ;
    }
    //solve one case other will done by recursion
    //N
    cout<<root->data<<" ";
    //L
    preorderTraversal(root->left);
    preorderTraversal(root->right);
   


}
//LNR
void inorderTraversal(Node * root){
    if(root ==NULL){
        return;

    }
    //solve one case other will done by recursion

     //LNR
      inorderTraversal(root->left);
      //N
      cout<< root->data<<" ";
      //R
      inorderTraversal(root->right);


}
//LRN
void postorderTraversal(Node*root){
    if(root==NULL){
        return;
    }
     postorderTraversal(root->left);
     postorderTraversal(root->right);
     cout<<root->data;

}

//level order traversal 
void levelOrderTraversal(Node*root){
    //empty tree
    if(root==NULL){
        return  ;

    }
    //LOT
    queue<Node *>q;
    //intial state maintain
    q.push(root);
    while (!q.empty()){
        Node * front =q.front();
        q.pop();
        cout<<front->data;
        

    }
}

int main(){
    Node*root=buildTree();
    cout<<"printing tree preorderTravesral";
    preorderTraversal(root);
    cout<<"printing tree inorderTravesral";
    inorderTraversal(root);
    cout<<"printing tree postorderTraversal";
    postorderTraversal(root);
    
    return 0;
    

}