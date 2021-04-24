#include<bits/stdc++.h>
using namespace std;
int ar[2*100009],br[2*100009];
int main()
{
    int n,id,x,l=0,r=0,ans,l1=0,r1=0,t1,t2;
    char ch;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        //scanf(" %c %d ",&ch,&id);
        cin>>ch>>id;
        if(i==1)
        {
            x=id;
            l++;
            r++;
            ar[id]=l;
            br[id]=r;
            continue;
        }
        if(ch=='L')
        {
            //
            l++;
            ar[id]=l;
            l1=id;
        }
        else if(ch=='R')
        {
            r++;
            br[id]=r;
            r1=id;//cout<<ar[id]<<" "<<br[id]<<endl;
        }
        else
        {
            //cout<<2<<endl;
            if(ar[id]>0&&br[id]>0)
            {   if(br[r1]==0)t1=0;
             else t1=br[r1]-1;
            if(ar[l1]==0)t2=0;
             else t2=ar[l1]-1;
                printf("%d\n",min(t2,t1));///&&ar[l1]>0
            }
            else if(ar[id]>0)
            {
                if(br[r1]==0)t1=0;
                else t1=br[r1]-1;
                ans=min((ar[l1]-ar[id]),t1+(ar[id]-1));
                printf("%d\n",ans);
            }
            else if(br[id]>0)
            {
                if(ar[l1]==0)t1=0;
                else t1=ar[l1]-1;
                ans=min((br[r1]-br[id]),t1+(br[id]-1));
                printf("%d\n",ans);
            }
        }
    }
    return 0;
}
