#include<bits/stdc++.h>
using namespace std;
int cont[1000000];
int main()
{
    string s;
    int n,sum=0,sum1,sum2;
    cin>>s;
    scanf("%d",&n);
    //cout<<s.length()<<endl;
     for(int i=0; i<s.length(); i++)
        {
            cont[s[i]]++;
            if(cont[s[i]]>1)
            {
                sum++;
            }
        }
    if(s.length()<n)
    {
        printf("impossible");
    }
    else if(s.length()==n)
    {
        printf("%d",sum);
    }
    else{
              sum1=s.length()-sum;
              if(sum1>=n){
                printf("0");
                return 0;
              }
              sum2=n-sum1;
              printf("%d",sum2);
    }
    return 0;
}
