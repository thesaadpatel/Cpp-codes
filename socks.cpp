#include <bits/stdc++.h>
using namespace std ;


typedef long long ll;

// ll arr[100000];

int main()
{
    ll t,n,a=0,b,c,d,m;
    cin>>n;

    cin>>m;
        b=n;
        t=m;
    while(n>=m){
        t=n/m;
        a+=t;
        n=n/m+n%m;

    }
    

    cout<<b+a;



}
