#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        ll n=1,e=0,h=0,a=1,b=1,c=1,cost=0;
        cin>>n>>e>>h>>a>>b>>c;
        // n = no. of friends
        // e = no of eggs available
        // h = no of cho bar available
        // omlette = 2 eggs
        // cho milk = 3 cho bars
        // cho cake = 1 egg, 1 cho bar


        // approach
        //so.............
        // loop through each friend
        // assign the cheapest option, move to next
        // but what if wwe run out of ingredients? hmm....
        //------------------
        // eg..
        // 3 friens and e=4,h=4, a=10,b=20,c=30
        // 1 - omlette,e=2
        // 2 - cho cake, e=1,h=3
        // 3 - cho milk, h=0
        // cost = 10+20+30=60
        //-------------------
        // any cheaper option??
        // 1- omlette e=2
        // 2-omlette e=0
        // 3-chomilk h=1
        // cost = 10+10+20 = 40...probably the lowest option
        // for(ll i=0; i<n; ++i){
            
        //     if(a<b&&a<c && e>=3){
        //         e=e-2;
        //         cost+=a;
        //     }
        //     else if(b<a&&b<c && h>=4){
        //         cost+=b;
        //     }
        //     else if(c<a&&c<b && h>=1 && e>=1){
        //         cost+=c;
        //     }
        //     else{
        //         cost = -1;
        //     }

        // }

        cout<<cost;
    }

}