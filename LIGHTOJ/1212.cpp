#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    vector<string>v;
    vector<int>v1;
    int n,m,x,l,t,y=0;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        y++;
        scanf("%d %d",&n,&m);
        for(int i=0; i<m; i++)
        {
            cin>>s;
            if(s=="pushLeft")
            {
                v.push_back(s);
                cin>>x;
                v1.push_back(x);
            }
            else if(s=="pushRight")
            {
                v.push_back(s);
                cin>>x;
                v1.push_back(x);
            }
            else if(s=="popLeft")
            {
                v.push_back(s);
            }
            else if(s=="popRight")
            {
                v.push_back(s);
            }
        }
        int j=0;
        cout<<"Case "<<y<<":"<<endl;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]=="pushLeft")
            {
                if(n==d.size())
                {
                    j++;
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    d.push_front(v1[j]);

                    cout<<"Pushed in left: "<<v1[j]<<endl;
                    j++;
                }
            }
            else if(v[i]=="pushRight")
            {
                if(n==d.size())
                {
                    j++;
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    d.push_back(v1[j]);
                    cout<<"Pushed in right: "<<v1[j]<<endl;
                    j++;
                }
            }

            else if(v[i]=="popLeft")
            {
                if(d.empty())
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    cout<<"Popped from left: "<<d.front()<<endl;
                    d.pop_front();
                }
            }
            else if(v[i]=="popRight")
            {
                if(d.empty())
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    cout<<"Popped from right: "<<d.back()<<endl;
                    d.pop_back();
                }
            }
        }
        d.clear();
        v1.clear();
        v.clear();
    }
    return 0;
}
