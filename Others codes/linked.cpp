#include<bits/stdc++.h>
using namespace std;
void print();
struct node
{
    char data;
    node *next;
};
node *head=NULL;
void createnode(char x){
   node *temp=new node();
   temp->data=x;
   temp->next=head;
   head=temp;
}
int main()
{
    //int n;
    //scanf("%d",&n);
    char x[1000];for(int i=0;x[i-1]!=' ';i++){
    scanf("%c",&x[i]);
    if(x[i]=='['||x[i]==']')continue;
    createnode(x[i]);
    }
    print();
    return 0;
}
void print()
{
    node *temp2=head;
    while(temp2!=0)
    {
        cout<<temp2->data<<endl;
        temp2=temp2->next;
    }
}
