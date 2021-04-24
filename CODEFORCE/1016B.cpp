#include<bits/stdc++.h>
using namespace std;
int cont[1000009],a[1000009],b[1000009];
int main()
{
    int n,m,l,m1,num,j,l1,l2;
    string s,s1,s2;
    scanf("%d %d %d",&n,&m,&l);
    cin>>s>>s1;
    for(int i=1; i<=l; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]==s1[0])
        {
            j=i;
            m1=i;
            while(j<=m1+m-1&&j<n)
            {
                s2+=s[j];
                j++;
            }
            if(s2==s1)
            {

                cont[i+1]=1;
                //cout<<m1<<" ";
            }
        }

        s2="";
    }
    for(int i=2; i<=n; i++)
    {
        cont[i]+=cont[i-1];
    }//cout<<cont[1]<<" "<<cont[2];
    //cout<<cont[0];
    for(int i=1; i<=l; i++)
    {
        l1=a[i],l2=b[i];
        l2-=(m-1);

        num=cont[l2]-cont[l1-1];
        if(num<=0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",num);
        }

    }
    return 0;
}
