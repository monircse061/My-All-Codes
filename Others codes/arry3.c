#include<stdio.h>
main()
{
    int i,ch,key,n,a[100],loc;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&key);
    ch=0;
    for(i=0;i<n;i++)
        {if(a[i]==key)
        {ch=1;
        loc=i+1;}}
    if(ch==1)
    printf("%d",loc);
    else
    printf("No");
    return 0;

}
