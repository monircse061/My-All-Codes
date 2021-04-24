#include<stdio.h>
main()
{
    int a[13]={28,30,32,38,45,55,60,70,75,80,85,90,100};
    int start,end,mid,key;
    start=0;
    end=12;
    key=38;
    do
    {
    mid=(int)((start+end)/2);
    printf("start:%d\tend:%d\tmid:%d\tkey:%d\n",start,end,mid,key);
    if(a[mid]==key)
        {printf("loc=%d\n",mid+1);
         break;}
    else if(a[mid]>key)
        {end=mid-1;}
    else
        {start=mid+1;}}
    while(start<=end);

    if(start>end)
    {printf("failed");}
    return 0;
}



