#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,a[100009],b,c,in1,in2,t,j=0,x,y;
    cin>>t;
    while(t--)
    {
        j++;
        cout<<"Case "<<j<<":"<<endl;
        scanf("%d",&n);
        scanf("%d",&q);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        while(q--)
        {
            int total=0;
            x=0;
            y=0;
            scanf("%d %d",&b,&c);
            in1=0;in2=0;
            int low=0,high=n-1,mid;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(mid==0&&b<a[mid])
                {
                    in1=mid;
                    break;
                }
                if(b<=a[mid])
                {
                    high=mid-1;
                    in1=high;
                }
                else
                {
                    low=mid+1;
                }
            }
            if(b>a[in1])
            {
                in1++;
            }
            low=0,high=n-1,mid;
            while(low<high)
            {
                mid=(low+high)/2;
                if(mid==0&&c<a[mid])
                {
                    in2=-1;
                    break;
                }
                if(c>=a[mid])
                {
                    low=mid+1;
                    in2=low;
                }
                else
                {
                    high=mid-1;
                }
            }
            if(c<a[in2])
            {
                in2--;
            }
            //cout<<in1<<" "<<in2<<endl;
            if(in1>in2||b>a[n-1])
            {
                printf("0\n");
            }
            else
            {
                total=in2-in1+1;
                printf("%d\n",total);
            }
        }
    }
    return 0;
}
