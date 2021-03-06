#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll c;
        cin>>c;
        // 2 pow d is > c
        //a,b < 2 pow d
        // c,a,b < 2 pow d

        ll a,b,maxx=0, n=100000;

        for(ll i = 0; i<n; ++i){
            a=i;
            b=a^c;
            ll x = a^b;
            if((x==c)&&b<c){
                //cout<<a<<" "<<b<<endl;
                maxx = max(maxx,a*b);
            }
        }
        cout<<maxx<<endl;


    }

}