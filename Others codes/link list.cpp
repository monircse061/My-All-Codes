#include<bits/stdc++.h>
using namespace std;
void print();
    struct node{
       int data;
       node *next;
    };
    node *head=NULL;
    int main(){
       int n;
       scanf("%d",&n);
       int x;
       scanf("%d",&x);
       node *temp;
       temp=new node();
       temp->data=x;
       temp->next=NULL;

       head=temp;

        node *temp1=head;
       for(int i=0;i<n-1;i++)
        {scanf("%d",&x);
        node *temp=new node();
        temp->data=x;
        temp->next=NULL;
        temp1=head;
       while(temp1->next!=NULL)
       {
           temp1=temp1->next;
       }
       temp1->next=temp;
       }
       print();
       return 0;
    }
void print(){
      node *temp2=head;
      while(temp2!=NULL){
        cout<<temp2->data<<" ";

        temp2=temp2->next;
      }
      cout<<endl;
}
/**#include<bits/stdc++.h>
using namespace std;
void print();
struct node
{
    int data;
    node *next;
};
node *head=NULL;
void createnode(int x){
   node *temp=new node();
   temp->data=x;
   temp->next=head;
   head=temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x;for(int i=0;i<n;i++){
    scanf("%d",&x);
    createnode(x);
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
}**/
