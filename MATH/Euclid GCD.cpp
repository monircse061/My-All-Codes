#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
     if(b==0){
        return 1;
     }
     else{
        return gcd(b,a%b);
     }
}
