#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int in()
{
    int n;///17312754
    scanf("%d", &n);
    return n;
}

int tree[3 * N];

void propagate(int pos)
{
    tree[pos]=0;
    tree[pos*2]^=1;
    tree[pos*2+1]^=1;
}

void update(int pos, int left, int right, int x, int y)
{
    if(left>y || right<x) return;
    if(left>=x && right<=y)
    {
        tree[pos]^=1;
        return;
    }
    if(tree[pos]) propagate(pos);
    int mid=(left+right)>>1;
    update(pos*2, left, mid, x, y);
    update(pos*2+1, mid+1, right, x, y);
}

int query(int pos, int left, int right, int x)
{
    if(left>x || right<x) return 0;
    if(left==right) return tree[pos];
    if(tree[pos]) propagate(pos);
    int mid=(left+right)>>1;
    if(x<=mid) return query(pos*2, left, mid, x);
    else return query(pos*2+1, mid+1, right, x);
}

int main()
{
    int n=in(), q=in();

    while(q--)
    {
        int ck=in();
        if(ck==1)
        {
            int x=in(), y=in();
            //cout<<n<<" ";
            update(1, 1, n, x, y);
        }
        else
        {
            int x=in();
            printf("%d\n", query(1, 1, n, x));
        }
    }
    return 0;
}

