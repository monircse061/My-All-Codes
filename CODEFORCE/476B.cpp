#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int pos=0,pos1=0,neg=0,neg1=0,num=0,num1=0,q=0,ques=0,mul=1,mul1=1,r,ques1=1;
    cin>>s>>s1;
    int ans;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='+')
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]=='+')
        {
            pos1++;
        }
        else if(s1[i]=='-')
        {
            neg1++;
        }
        else
        {
            q++;
        }
    }
    if(pos==pos1&&neg==neg1)
    {
        double ans1=1.0;
        printf("%.12f",ans1);
    }
    else if((neg!=neg1||pos!=pos1)&&q==0)
    {   double ans1=0.0;
        printf("%.12f",ans1);
    }
    else
    {
        num1=pos-pos1;
        ques=s.length()-(pos1+neg1);
        num=ques;

        if(num1==0)
            num1=1;
        r=pos-pos1;
        if(r==0)
        {
            ans=1;
            //printf("%.12f",(double)ans);
        }
         if(r<0){
        double ans1=0.0;
        printf("%.12f",ans1);
        }
        else
        {
            for(int i=1; i<=r; i++)
            {
                mul*=num;
                num--;
                mul1*=num1;
                num1--;
            }

            ///cout<<mul<<" "<<mul1<<" "<<ques1;
            ans=(mul/mul1);
            printf("%.12f",(double)(ans/pow(2,ques)));
        }

    }
    return 0;
}
