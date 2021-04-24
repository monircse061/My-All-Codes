#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head=NULL;
void print()
{
    if(head!=NULL)
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    else
    {
        cout<<"empty";
    }
    cout<<endl;
}
int main()
{
    char c;
    int x,y,z;
    while(scanf("%c",&c)!=EOF)
    {
        if(c=='q')
            break ;
        else if(c=='r')
        {
            if(head==NULL)
            {
                cout<<"empty"<<endl;
            }
            else
            {
                node *temp=head;
                temp=temp->next;
                head=temp;
                print();
            }
        }
        else if(c=='f')
        {
            scanf("%d",&x);
                node *temp1=new node();
                temp1->data=x;
                temp1->next=head;
                head=temp1;
                print();
        }
        else if(c=='i')
        {
            scanf("%d %d",&x,&y);

            if(x>0)
            {
                node *temp=head;
                if(temp->next!=NULL)
                {
                    for(int i=0; i<x-1; i++)
                    {
                        temp=temp->next;
                        if(temp->next==NULL)
                        {
                            break;
                        }
                    }
                }
                node *temp1=new node();
                temp1->data=y;
                temp1->next=temp->next;
                temp->next=temp1;
                print();
            }
            else
            {
                node *temp1=new node();
                temp1->data=y;
                temp1->next=head;
                head=temp1;
                print();
            }
        }
        else if(c=='d')
        {
            scanf("%d",&x);
            node *temp=head;
            if(x>0&&head!=NULL)
            {
                node *temp1=temp->next;
                if(temp1->next!=NULL)
                {
                    for(int i=0; i<x-1; i++)
                    {
                        temp=temp->next;
                        temp1=temp1->next;
                        if(temp1->next==NULL)
                            break;
                    }
                }
                temp->next=temp1->next;
                print();
            }
            else if(head==NULL)
            {
                cout<<"empty"<<endl;
            }
            else
            {
                node *temp=head;
                temp=temp->next;
                head=temp;
                print();
            }
        }
    }
    return 0;
}
