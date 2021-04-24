#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};
node *head=NULL;
void insert_nth_position(int data,int pos);
void print();
int main(){
   int x,n,data,pos;
   cout<<"how many input"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
   cout<<"data and pos";
   cin>>data>>pos;
   insert_nth_position( data,pos);
   print();}
return 0;
}
void insert_nth_position(int data,int pos){
 node *temp=new node();
 temp->data=data;
 temp->next=NULL;

 if(pos==1){
    temp->next=head;
    head=temp;
    return ;
 }node *temp1=head;
 for(int i=1;i<pos-1;i++)
    temp1=temp1->next;
    temp->next=temp1->next;
    temp1->next=temp;

}
void print(){
   node  *temp=head;
   while(temp!=NULL)
   {cout<<"temp"<<temp<<" "<<temp->data<<" "<<temp->next;
   cout<<" ";
   temp=temp->next;}

}

