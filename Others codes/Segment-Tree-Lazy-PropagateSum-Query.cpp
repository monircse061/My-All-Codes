#include<bits/stdc++.h>
using namespace std;

#define ll             long long
#define LL             long long
#define gcd(a,b)       __gcd(a,b)
#define lcm(a,b)       a*(b/gcd(a,b))
#define pii            pair<int, int>
#define pll            pair<ll, ll>
#define pil            pair<int, ll>
#define pli            pair<ll, int>
#define vi             vector<int>
#define vl             vector<ll>
#define vii            vector<pii>
#define vll            vector<pll>
#define vil            vector<pil>
#define vli            vector<pli>
#define pb             push_back
#define ppb            pop_back
#define mp             make_pair
#define ff             first
#define ss             second
#define all(v)         v.begin(),v.end()
#define fill(a,b)      memset(a,b,sizeof a)
#define smax(a, b)     a=max(a, b)
#define smin(a, b)     a=min(a, b)
#define sqr(x)         x*x
#define cube(x)        x*x*x
#define FOR(i, l, r)   for(int i=l;i<=r;i++)
#define ROF(i, l, r)   for(int i=r;i>=l;i--)
#define endl           '\n'

int in() {
    int n;
    scanf("%d",&n);
    return n;
}

ll Lin() {
    ll n;
    scanf("%lld",&n);
    return n;
}

double Din() {
    double n;
    scanf("%lf",&n);
    return n;
}

const double gama = 0.57721566490;
const double eps = 0.00000001;
const ll inf = 1e17;
const ll mod = 1e9 + 7;
const int N = 2e5 + 5;

ll a[N];
struct info {
    ll sum, prop;
} tree[4 * N];

void build(int pos, int left, int right) {
    if(left==right) {
        tree[pos].sum=a[left];
        return;
    }
    int mid=(left+right)>>1;
    build(pos*2, left, mid);
    build(pos*2+1, mid+1, right);
    tree[pos].sum=tree[pos*2].sum+tree[pos*2+1].sum;
}

void update(int pos, int left, int right, int x, int y, ll val) {
    if(left>y || right<x) return;
    if(left>=x && right<=y) {
        tree[pos].prop+=val;
        tree[pos].sum+=val*(right-left+1);
        return;
    }
    int mid=(left+right)>>1;
    update(pos*2, left, mid, x, y, val);
    update(pos*2+1, mid+1, right, x, y, val);
    tree[pos].sum=tree[pos*2].sum+tree[pos*2+1].sum+tree[pos].prop*(right-left+1);
}

ll query(int pos, int left, int right, int x, int y, ll p=0LL) {
    if(left>y || right<x) return 0LL;
    if(left>=x && right<=y) return tree[pos].sum+p*(right-left+1);
    int mid=(left+right)>>1;
    ll m=query(pos*2, left, mid, x, y, p+tree[pos].prop);
    ll n=query(pos*2+1, mid+1, right, x, y, p+tree[pos].prop);
    return m+n;
}

int main() {
    int n=in(), q=in();
    for(int i=1; i<=n; i++)
        a[i]=Lin();
    build(1, 1, n);
    while(q--) {
        int ck=in();
        if(ck) {
            int x=in(), y=in();
            printf("%lld\n", query(1, 1, n, x, y));
        } else {
            int x=in(), y=in();
            ll val=Lin();
            update(1, 1, n, x, y, val);
        }
    }
    return 0;
}




