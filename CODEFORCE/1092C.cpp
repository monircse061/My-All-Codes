#include<bits/stdc++.h>
using namespace std;

vector<string>v;
queue<char>sta,sta1;
map<string,int>m,m1;
bool visit[300],visit1[300];
int main()
{
    int n,cont1=0,cont2=0,ck,cont3=0,cont4=0,ck1;
    string s,st,prefix,suffix;
    scanf("%d",&n);
    for(int i=0; i<(2*n)-2; i++)
    {
        cin>>s;
        v.push_back(s);
        if(prefix==""&&v[i].size()==n-1)
        {
            prefix=s;////
        }
        else if(v[i].size()==n-1)
        {
            suffix=s;
        }
        m[s]++;
        m1[s]++;
    }//cout<<m["a"]<<" "<<suffix;
    for(int i=0; i<(2*n)-2; i++)
    {
        ck=1;
        if(v[i].size()==n-1)continue;
        for(int j=0; j<v[i].size(); j++)
        {
            if(prefix[j]!=v[i][j])
            {
                ck=0;
                break;
            }
        }
        if(ck==1&&!visit[v[i].size()])
        {

            visit[v[i].size()]=1;
            visit1[i]=1;
            cont1++;
            //cout<<'S';
        }
    }
    for(int i=0; i<(2*n)-2; i++)
    {
        ck=1;
        int l=1;
        if(v[i].size()==n-1)continue;
        for(int j=v[i].size()-1; j>=0; j--)
        {
            if(suffix[suffix.size()-l]!=v[i][j])
            {
                ck=0;
                break;
            }
            l++;
        }
        if(ck==1&&!visit1[i])
        {
            cont2++;    //cout<<'S';
            //m1[v[i]]--;
            visit1[i]=1;
        }
    }
    //cout<<cont1<<" "<<cont2;
    for(int i=1; i<=(2*n)-2; i++)visit[i]=false;
    if(cont1>=((2*n)-4)/2&&cont2>=((2*n)-4)/2)
    {
        ck=1;
        ck1=1;//cout<<1;
        for(int i=0; i<(2*n)-2; i++)
        {
            ck=1;
            if(v[i].size()==n-1&&ck1==1)
            {
                cout<<'P';
                ck1=0;
                continue;
            }
            else if(v[i].size()==n-1&&ck1==0)
            {
                cout<<'S';
                continue;
            }
            for(int j=0; j<v[i].size(); j++)
            {
                if(prefix[j]!=v[i][j])
                {
                    ck=0;
                    break;
                }
            }
            if(ck==0)
            {
                cout<<'S';
            }
            else if(ck==1&&!visit[v[i].size()])
            {
                visit[v[i].size()]=true;
                cout<<'P';
            }
            else
            {
                cout<<'S';
            }
        }
    }
    else
    {
        ck=1;
        ck1=1;
        for(int i=0; i<(2*n)-2; i++)
        {
            ck=1;
            if(v[i].size()==n-1&&ck1==1)
            {
                cout<<'S';
                ck1=0;
                continue;
            }
            else if(v[i].size()==n-1&&ck1==0)
            {
                cout<<'P';
                continue;
            }
            for(int j=0; j<v[i].size(); j++)
            {

                if(suffix[j]!=v[i][j])
                {
                    ck=0;
                    break;
                }
            }
            if(ck==0)
            {
                cout<<'S';
            }
            else if(ck==1&&!visit[v[i].size()])
            {
                visit[v[i].size()]=true;
                cout<<'P';
            }
            else
            {
                cout<<'S';
            }
        }
        //cout<<sta1.front();
    }

    //main();
    return 0;
}
