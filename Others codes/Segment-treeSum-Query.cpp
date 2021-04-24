#include<bits/stdc++.h>
using namespace std;

#define ll             long long
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
#define mii            map<int, int>
#define mll            map<ll, ll>
#define pb             push_back
#define ppb            pop_back
#define mp             make_pair
#define mt             make_tuple
#define lb             lower_bound
#define ub             upper_bound
#define ff             first
#define ss             second
#define all(v)         v.begin(),v.end()
#define fill(a,b)      memset(a,b,sizeof a)
#define smax(a, b)     a=max(a, b)
#define smin(a, b)     a=min(a, b)
#define sqr(x)         x*x
#define cube(x)        x*x*x
#define asort(a, n)    sort(a+1, a+n+1)
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
const ll mod = 1e9 + 9;
const int N = 2e5 + 5;

ll a[N], tree[4 * N];

void build(int pos, int left, int right) {
    if(left==right) {
        tree[pos]=a[left];
        return;
    }
    int mid=(left+right)>>1;
    build(pos*2, left, mid);
    build(pos*2+1, mid+1, right);
    tree[pos]=tree[pos*2]+tree[pos*2+1];
}

void update(int pos, int left, int right, int x, ll val) {
    if(left>x || right<x) return;
    if(left==right) {
        tree[pos]+=val;
        return;
    }
    int mid=(left+right)>>1;
    update(pos*2, left, mid, x, val);
    update(pos*2+1, mid+1, right, x, val);
    tree[pos]=tree[pos*2]+tree[pos*2+1];
}

ll query(int pos, int left, int right, int x, int y) {
    if(left>y || right<x) return 0LL;
    if(left>=x && right<=y) return tree[pos];
    int mid=(left+right)>>1;
    ll m=query(pos*2, left, mid, x, y);
    ll n=query(pos*2+1, mid+1, right, x, y);
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
            int l=in(), r=in();
            printf("%lld\n", query(1, 1, n, l, r));
        } else {
            int x=in();
            ll val=Lin();
            update(1, 1, n, x, val);
        }
    }
    return 0;
}

