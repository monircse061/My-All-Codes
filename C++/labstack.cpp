#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node *next;
};
node *head=NULL;
int main(){
   int n,x;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    scanf("%d",&x);
    node *temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        node *temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
   }
   {

       node *temp2=head;
       while(temp2!=NULL){
        cout<<temp2->data;
        temp2=temp2->next;
       }
   }
   return 0;
}
