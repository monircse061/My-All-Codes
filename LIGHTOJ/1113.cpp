#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>st;
    vector<string>v,v1;
    string s1,s;
    stack<string>st1;
    int t,x=0;
    scanf("%d",&t);
    while(t--){x++;

    st.push("http://www.lightoj.com/");
    while(1)
    {
        cin>>s1;
        if(s1=="VISIT"||s1=="BACK"||s1=="FORWARD")
        {
            v.push_back(s1);
        }
        else if(s1=="QUIT")
        {
            v.push_back(s1);
            break;
        }
        else
        {
            v1.push_back(s1);
        }
    }
    int i=0,j=0;
    printf("Case %d:\n",x);
    while(1)
    {

        if(v[i]=="QUIT")
            break;
        else if(v[i]=="VISIT")
        {

            st.push(v1[j]);
            while(1){
            if(!st1.empty())
            {
                st1.pop();
            }
            else
                break;
            }
            cout<<v1[j]<<endl;
            j++;
        }
        else if(v[i]=="BACK")
        {
            st1.push(st.top());
            st.pop();
            if(st.empty())
            {
                st.push("http://www.lightoj.com/");
                st1.pop();
                cout<<"Ignored"<<endl;
            }
            else
            {
                cout<<st.top()<<endl;
            }
        }
        else if(v[i]=="FORWARD")
        {
            if(st1.empty())
            {
                cout<<"Ignored"<<endl;
            }
            else
            {
                st.push(st1.top());
                st1.pop();
                cout<<st.top()<<endl;
            }
        }i++;
    }while(1){if( !st.empty())
                st.pop();
             if(!st1.empty())
             st1.pop();
             if( st.empty()&&st1.empty())
                break;

           }
         v.clear();v1.clear();

         }
    return 0;
}
