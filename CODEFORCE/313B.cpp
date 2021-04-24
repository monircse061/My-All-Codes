#include<bits/stdc++.h>
using namespace std;
int cont[100009];
int main()
{
    string s;
    int n,a[100009],b[100009];
    cin>>s;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i]==s[i+1])
        {
            cont[i+1]=1;
        }
        cont[i+1]+=cont[i];
    }
    for(int i=1;i<=n;i++){
        cout<<cont[b[i]-1]-cont[a[i]-1]<<endl;
    }
    return 0;
}
