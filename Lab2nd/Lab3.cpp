#include<bits/stdc++.h>
using namespace std;
/**void Partition(int f,int l)
{
    int i,j;
    if(f<l)
    {
        i=f+1;
        j=l;
        while(a[f]>a[i])
        {
            i++;
        }
        while(a[f]<a[j])
        {
            j--;
        }
        while(i<j)
        {
            swap(a[i],a[j]);
            while(a[f]>a[i])
            {
                i++;
            }
            while(a[f]<a[j])
            {
                j--;
            }
        }

        swap(a[j],a[f]);
        Partition(f,j-1);
        Partition(j+1,l);
    }
}
**/
int Partition(int a[],int l,int r)
{
    int x=a[r];
    int i=l-1;
    for(int j=l; j<r; j++)
    {
        if(a[j]<=x)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
void qsort(int a[],int i,int j){
    if(i<j){
        int m=Partition(a,i,j);
        qsort(a,i,m-1);
        qsort(a,m+1,j);
    }
}
void pir(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<"\n";
}
int main()
{
    int a[]= {1,3,2,5};
    int n = sizeof(a)/sizeof(a[0]);
    Partition(a,0,n-1);
    qsort(a,0,n-1);
    pir(a,n);
    return 0;
}
