#include<bits/stdc++.h>
using namespace std;

char s2[100009];
int tree[4*100099];

void  update(int node,int L,int R,int l,int r)
{
    if(l>R||r<L)
    {
        return ;
    }
    if(l<=L&&r>=R)
    {
        tree[node]++;
        return ;
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    update(left,L,mid,l,r);
    update(right,mid+1,R,l,r);

}
void query(int node,int L,int R,int pos)
{

    if(tree[node]!=0)
    {
        if(L!=R)
        {
            tree[node*2]+=tree[node];
            tree[node*2+1]+=tree[node];
            tree[node]=0;
        }

    }
    if(pos<L||pos>R)
        return ;
    if(L==R)
    {
        if(tree[node]%2!=0){
            if(s2[pos]=='1'){
                s2[pos]='0';
            }
            else{
                s2[pos]='1';
            }
          tree[node]=0;
        }
        return ;
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    query(left,L,mid,pos);
    query(right,mid+1,R,pos);

}
int main()
{
    int n;
    int t,j=0;
    char s;
    scanf(" %d",&t);
    while(t--)
    {
        scanf(" %s",s2);
        scanf(" %d",&n);
        int len=strlen(s2);
        j++;
        printf("Case %d:\n",j);
        for(int i=1; i<=n; i++)
        {
            scanf(" %c",&s);
            if(s=='I')
            {
                int l,r;
                scanf(" %d %d",&l,&r);
                update(1,0,len-1,l-1,r-1);
            }
            else
            {
                int pos;
                scanf(" %d",&pos);
                query(1,0,len-1,pos-1);
                printf("%c",s2[pos-1]);
                printf("\n");
            }
        }
     for(int i=1;i<4*100009;i++)
        tree[i]=0;
    }
    return 0;
}
