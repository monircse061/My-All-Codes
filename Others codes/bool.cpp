#include<bits/stdc++.h>
using namespace std;
bool check (int N)
{
    int i=2;
    if( (N & ((1 << i)-1)) )
        return true;
    else
        return false;
}
int main(){
   cout<<check(5);
    return 0;
}

