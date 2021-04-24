#include<bits/stdc++.h>
using namespace std;
string s2[100000];
int cont[100000];
map<string,int>m;
map<string,int>:: iterator it;
void fun()
{
    for(int i=96; i<124; i++)
    {
        cont[i]=0;
    }
}
int main()
{
    string s,s1[100000],st,st1;
    int n,sum=1;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        cin>>s1[i];
        sort(s1[i].begin(),s1[i].end());
    }
    for(int i=0; i<n; i++)
    {
        s="";
        fun();
        for(int j=0; j<s1[i].length(); j++)
        {
            int len=s1[i][j];
            if(cont[len]==0)
            {
                s+=s1[i][j];
            }
            cont[len]=1;
        }//s+='\0';
        s2[i]=s;
        //cout<<s2[0][0]<<s2[0][1]<<s2[0][2]<<endl;
    }
    sort(s2,s2+n);

    st="",st1="";
    for(int i=1; i<n; i++)
    {
        st=s2[i];
        st1=s2[i-1];
        //cout<<st.length()<<" "<<st1.length()<<endl;
        if(st!=st1)
        {
            sum++;
        }
        st="",st1="";
    }
    cout<<sum<<endl;
    return 0;
}
