#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node *right=NULL,*left=NULL;
};
node *root=NULL;
void insertnode(int n){
     node *temp;node *parent;node *temp1;
     temp=new node();
     temp->data=n;
     if(root==NULL){
        root=temp;
     }
     else{
     temp1=root;
     while(1){
        if(temp->data<=temp1->data){
            if(temp1->left==NULL){
                temp1->left=temp;
                break;
            }
            else{
               temp1=temp1->left;
            }
        }
        else{
            if(temp1->right==NULL){
                temp1->right=temp;
                break;
            }
            else{
                temp1=temp1->right;
            }
        }
     }

     }
}
void searh(int n){
    node *temp1=root;
    while(temp1!=NULL){
        if(temp1->data==n){
            cout<<"yes"<<endl;
            break;
        }
        if(n<=temp1->data){
            temp1=temp1->left;
        }
        else{
            temp1=temp1->right;
        }
    }
}
int main(){
    int t,j;
    cin>>t;
    for(int i=1;i<=t;i++){
            cin>>j;
        insertnode(j);
    }

//     insertnode(30);
//     insertnode(50);
//     insertnode(20);
//     insertnode(40);
//     insertnode(45);
//     insertnode(70);
     int n;
     cin>>n;
     searh(n);
     return 0;
}
