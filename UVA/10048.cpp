
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >a[10000];
int v[1000];
int l=0,x=INT_MIN,cont[10000];
void dfs(int n,int d)
{
    v[n]=1;
    for(int i=0; i<a[n].size(); i++)
    {
        int b=a[n][i].first;
        int c=a[n][i].second;
         if(x<c&&n!=d){
            x=c;
         }
        if(b==d&&n!=d){
                cout<<x<<" ";
            cont[l]=x;
            x=INT_MIN;
            l++;
        }

        if(!v[b])
        {
            //cout<<n<<" "<<b<<endl;
            dfs(b,d);
        }
    }
}
int main()
{
    int n,e,x,y,s,z;
    scanf("%d %d",&n,&e);
    for(int i=1; i<=e; i++)
    {
        cin>>x>>y>>z;
        a[x].push_back(make_pair(y,z));
        a[y].push_back(make_pair(x,z));
    }
    //for(int i=1;i<n;i++){
    //if(!v[i]){
    //c++;
    dfs(1,7);//}}
    sort(cont,cont+l);
    for(int i=0;i<l;i++)
    //cout<<cont[i]<<endl;

return 0;
}
