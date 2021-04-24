/***1#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,x=-1,a[1000];
     scanf("%d",&n);
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     for(int i=0;i<n;i++){
        if(x<a[i]){
            x=a[i];
        }
     }
cout<<x;
return 0;
}****/
/****2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100],b[100][100],n,m,c[100][100];
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}****/
/*****4
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
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertfirst(int n)
{
    if(head==NULL)
    {
        node *temp=new node();
        temp->data=n;
        temp->next=NULL;
        head=temp;
    }
    else
    {
        node *temp1=head;
        node *temp=new node();
        temp->data=n;
        temp->next=temp1;
        head=temp;
    }
    print();
}
void insertlast(int n)
{
    node *temp=new node();
    temp->data=n;
    if(head==NULL)
    {
        temp->next=NULL;
        head=temp;
    }
    else
    {
        node *temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->next=NULL;
    }
    print();
}
void deletefirst()
{
    if(head==NULL)
    {
        cout<<"input"<<endl;
    }
    else
    {
        node *temp=head;
        head=temp->next;
    }
    print();
}
void deletelast()
{
    node *temp=head,*temp1;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    print();
}
void updatevalue(int c,int n)
{
    node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==c)
        {
            temp->data=n;
        }
        temp=temp->next;
    }
    print();
}
void updateindex(int i,int n)
{
    node *temp=head;
    int cont=0;
    while(temp!=NULL)
    {
        if(cont==i)
        {
            temp->data=n;
        }
        temp=temp->next;
        cont++;
    }
    print();
}
int main()
{
    insertfirst (1);
    insertfirst (2);
    insertlast( 3);
    insertlast (1);
    deletefirst ();
    deletelast ();
    insertfirst (4);
    insertlast (1);
    updatevalue (1, 5);
    updatevalue (3, 2);
    updateindex (0, 1);
    updateindex (1, 3);/// 1 3 2 5
    print();
}
******************/
/****5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    stack<char>st;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(!st.empty()&&st.top()=='('&&s[i]==')')
        {
            st.pop();
        }
        else if(!st.empty()&&st.top()=='{'&&s[i]=='}')
        {
            st.pop();
        }
        else if(!st.empty()&&st.top()=='['&&s[i]==']')
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }

    if(st.empty())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
****************/
/**********6
#include<bits/stdc++.h>
using namespace std;
stack<int>s;
int top=-1,a[1000];
void Push(int n)
{
    top++;
    a[top]=n;
}
void Pop()
{
    if(top==-1)
    {
        cout<<"Stack Underflow!"<<endl;
    }
    else{
    top--;}
}
void Peek(){
    cout<<a[top]<<endl;
}
void print()
{
    if(top>=0)
    {
        for(int i=top; i>=0; i--)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"no input"<<endl;
    }
}
int main()
{

    Push(1);// 1
    print();
    Push(2); //2 1
    print();
    Push(5); //5 2 1
    print();
    Pop(); //2 1
    print();
    Pop(); //1
    print();
    Pop();
    print();
    Pop(); //Stack Underflow!
    print();
    Push (4); //4
    print();
    Push (7); //7 4
    print();
    Peek();
}
************/
/****7
#include<bits/stdc++.h>
using namespace std;
queue<int>q;
#define MAX 1000
int a[MAX],top=-1,cont=0;
void Enqueue(int n)
{
    if(top==MAX)
    {
        cout<<"full"<<endl;
    }
    else
    {
        top++;
        a[top]=n;
    }
}
void Dequeue()
{
    if(cont>top)
    {
        cout<<"under"<<endl;
    }
    else
    {
        cont++;
    }
}
void print(){
    for(int i=cont;i<=top;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    Enqueue (42);// 42
    Dequeue ( );//
    Enqueue (14);// 14
    print ( );// 14
    Enqueue (28);// 14  28
    print ( );// 14
    Enqueue (60);// 14  28  60
    Enqueue (78) ;//14 28 60 78
    print();
    Dequeue ( );// 28  60  78
    Dequeue ( );// 60 78
    print();
}
*************/
/************8
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *pre,*post;
};
node *head=NULL;
void value(int n)
{
    node *temp1=new node();
    temp1->data=n;
    node *temp=head;
    while(1)
    {
        if(head==NULL)
        {
            head=temp1;

            break;
        }
        else if(n<temp->data)
        {
            if(temp->pre==NULL)
            {
                temp->pre=temp1;
                break;
            }
            else
            {
                temp=temp->pre;
            }
        }
        else
        {
            if(temp->post==NULL)
            {
                temp->post=temp1;
                break;
            }
            else
            {
                temp=temp->post;
            }
        }
    }
}
void mini()
{
    node *temp2=head;
    while(1)
    {
        if(temp2->pre==NULL)
        {
            cout<<temp2->data<<endl;
            break;
        }
        temp2=temp2->pre;
    }
}
void maxi(){
    node *temp2=head;
    while(1){
        if(temp2->post==NULL){
            cout<<temp2->data<<endl;
            break;
        }
        temp2=temp2->post;
    }
}
void preorder(node *temp){
       if(temp!=NULL){
        cout<<temp->data<<" ";
        preorder(temp->pre);
        preorder(temp->post);
       }
}
void postorder(){};
void inorder(){};
int main()
{
    value(50);
    value(33);
    value(44);
    value(22);
    value(77);
    value(35);
    value(60);
    value(40);
    mini();
    maxi();
    preorder(head);
    node *temp=head;
    //cout<<temp->data;
    return 0;
}
****************/
/****************9
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],t;
    a[0]=INT_MIN;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=2; j<=n; j++)
    {
        int i=j-1;
        t=a[j];
        while(t<a[i]&&i>0)
        {
           a[i+1]=a[i];
           i--;
        }
        a[i+1]=t;
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
************/
/**********
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000];
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=n; j>=1; j--)
    {
        int t=1;
        for(int i=2; i<=j; i++)
        {
            if(a[t]<a[i])
            {
                t=i;
            }
        }
        int c=a[t];
        a[t]=a[j];
        a[j]=c;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
***********/
/*********11
#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int q,int r)
{
    int  n1=q-l+1;
    int  n2=r-q;
    int L[n1],R[n2];
    for (int i = 0; i < n1; i++)
    {

        //cout<<l;
        L[i] = a[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = a[q + 1+ j];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}
void print(int a[])
{
    for(int i=0; i<6; i++)
    {
        cout<<a[i]<<" ";
    }
}
void mergeSort(int a[],int l,int r)
{
    if(l<r)
    {
        int  q=(l+r)/2;
        mergeSort(a,l,q);
        mergeSort(a,q+1,r);
        merge(a,l,q,r);
    }
}
int main()
{
    int a[6]= {12,11,13,5,6,7};
    int l=0,r=6-1;
    mergeSort(a,l,r);
    print(a);
}
****************/
#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int visit[10000],cont=0,sum[10000];
void fun()
{
    for(int i=0; i<7; i++)
    {
        visit[i]=0;
        cont=0;
    }
}
void dfs(int n)
{    visit[n]=1;
    for(int i=0; i<v[n].size(); i++)
    {
        int e=v[n][i];
        if(visit[e]==0)
        {
            cont++;
            dfs(e);
        }
    }
}
int main()
{
    int x,y;
    for(int i=1; i<=8; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
    }
    for(int i=0; i<7; i++)
    {
        dfs(i);
        sum[i]=cont;
        fun();
    }
    int x1=INT_MIN,y1;
    for(int i=0;i<7;i++){

        if(x1<sum[i]){
            x1=sum[i];
            y1=i;
        }
    }
    cout<<y1<<endl;
    return 0;
}














































