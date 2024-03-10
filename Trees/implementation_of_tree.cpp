#include<stdio.h>
#include<iostream>
using namespace std;

struct node{
    int key;
    node *left;
    node*right;
       node(int k){
        key=k;
        left=nullptr;
        right=nullptr;
       }   
};

void inorder(node *root){
  
  if(root==nullptr){
    return;
  }

    inorder(root->left);
    cout<<root->key<<endl;
    inorder(root->right);


}

int main(){
    node *root=new node(10);
    root->left=new node(15);
    root->right=new node(18);
    root->left->left=new node (20);

    inorder(root);

}