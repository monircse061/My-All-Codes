#include<bits/stdc++.h>
using namespace std;
void print();
int n,k,num,t;
struct node
{
    int data;
    node *next;
    node *pre;
};
node *head=NULL;
node *tail=NULL;
void del(){
   if(k==0)
        print();
    else
    {int x=1;node *temp1=NULL,*temp2=NULL;
        while(num<=k)
        {
            //if(num==k)
            //{
               // break;
           // }
            if(x==1)
            {temp1=head;
            temp2=temp1->next;x=0;
                    }
            if(1)
            {
                    node *temp3=NULL;
                    if(temp1->data<temp2->data&&temp1->next!=NULL)
                    {
                        if(temp1==head){head=temp1->next;}
                        else{
                        temp3=temp1->pre;
                        temp3->next=temp1->next;
                        temp2->pre=temp3;}
                        num++;//x=1;
                        delete(temp1);
                    }
                    if(temp2->next==NULL)
                    {x=1;}
            }
                    temp1=temp2;
                    temp2=temp2->next;
        }
        print();
    }
}
int main()
{
    scanf("%d",&t);
    while(t--){
    scanf("%d %d",&n,&k);
    num=1;
    int x;
    scanf("%d",&x);
    node *temp;
    temp=new node();
    temp->data=x;
    temp->next=NULL;
    head=temp;
    tail=temp;
    node *temp1=head;
    for(int i=0; i<n-1; i++)
    {
        scanf("%d",&x);
        node *temp=new node();
        temp->data=x;
        temp->next=NULL;
        tail=temp;
        temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->pre=temp1;
    }
    del();
    }
    return 0;
}
void print()
{
    node *temp2=head;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    cout<<endl;
    head=NULL;
    tail=NULL;
}
