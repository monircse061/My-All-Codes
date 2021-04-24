#include<bits/stdc++.h>

using namespace std;

#define ll long long int


///sort(ar+1,ar+n+1,greater<int>());
/**struct abc{
    int v;int u;
};
abc e[10000];
bool compare(abc a,abc b)
{
    return a.v<b.v;
}**/
ll fun(ll n)
{
    if(n==0)
    {
        return 1;
    }
    else
        return n*fun(n-1);
}
int main()
{
 printf("%c",122);
   return 0;
}


/**string query(int node,int L,int R,int pos)
{
    if(pos<L||pos>R)
    {
        return "";
    }
    if(L==R)
    {
        return tree[node];
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    string s=query(left,L,mid,pos);
    string s1=query(right,mid+1,R,pos);
    if(s!="")
    {
        return s;
    }
    else
    {
        return s1;
    }
}**/


/**#include <iostream>
#include <map>
#include <vector>

using namespace std;

template <typename T> vector<T> readVector(int n) { vector<T> res(n); for (int i = 0 ; i < n ; i++) cin >> res[i]; return res; }

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	int n; cin >> n;
	auto v = readVector<int>(n);

	map<int, long long> results;

	map<int, int> divisors;
	map<int, int> nextDivisors;int i=0;
	for ( i = 0 ; i < n ; i++) {
		nextDivisors.clear();
		for (auto &p : divisors) {
			nextDivisors[gcd(p.first, v[i])] += p.second;
			cout<<p.first<<" "<<v[i]<<" "<<p.second<<" "<<endl;
		}

		nextDivisors[v[i]]++;

		swap(nextDivisors, divisors);//i++;
		for (auto &p : divisors)
        {cout<<i<<endl;
			results[p.first] += p.second;
			 cout<<p.first<<" "<<results[p.first]<<endl;
			}
			cout<<"***"<<endl;
	}

	int q; //cin >> q;
	while (q --> 0) {
		//int x; cin >> x;
		//cout << results[x] << endl;
	}
}**/






