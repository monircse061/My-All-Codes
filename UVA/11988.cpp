#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define val 10000000
char s[val];
struct node
{
    char data;
    node *next;
};
void print();
node *head=NULL;
node *tail=NULL;
int main()
{

    while(scanf("%s",s)!=EOF)
    {
        int x,ln,y=1;
        ln=strlen(s);
        node *temp1=NULL;
        for(int i=0; i<ln; i++)
        {
            if(head==NULL&&((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')))
            {
                y=0;
                node *temp;
                temp=new node();
                temp->data=s[i];
                temp->next=NULL;
                head=temp;
                tail=temp;
            }
            else if((s[i]=='['&&(s[i+1]=='_'||(s[i+1]>='A'&&s[i+1]<='Z')||(s[i+1]>='a'&&s[i+1]<='z'))))
            {
                if(head==NULL)
                {
                    node *temp;
                    temp=new node();
                    temp->data=s[i+1];
                    temp->next=head;
                    head=temp;
                    tail=temp;
                }
                else
                {
                    node *temp=new node();
                    temp->data=s[i+1];
                    temp->next=head;
                    head=temp;
                    y=0;
                }
                int j=i+2;
                node *tem=head;
                while(s[j]!='\0')
                {
                    if(s[j]==']'||s[j]=='[')
                    {
                        i=j;
                        break;
                    }
                    node *temp=new node();
                    temp->data=s[j];
                    temp->next=tem->next;
                    tem->next=temp;
                    tem=tem->next;
                    if(y==1)
                    {
                        tail=temp;
                    }
                    j++;
                }
                i=j-1;
            }
            else if(s[i]=='_'||(s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
                node *temp=new node();
                temp->data=s[i];
                temp->next=NULL;
                temp1=tail;
                temp1->next=temp;
                tail=temp;
            }
        }
        print();
        head=NULL;
        fflush(stdin);
    }
    return 0;
}
void print()
{
    node *temp2=head,*del=head;
    while(temp2!=NULL)
    {
        cout<<temp2->data;
        temp2=temp2->next;
        delete(del);
        del=temp2;
    }

    cout<<endl;
}
