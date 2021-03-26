#include <iostream>
#define ll long long int
using namespace std;


// Charles defines the goodness score of a string as the number of 
// indices i such that Si≠SN−i+1 where 1≤i≤N/2 (1-indexed).
//  For example, the string CABABC has a goodness score of 2 since S2≠S5 and S3≠S4.

int main(){
    unsigned int t, x, ops;
    cin >> t;
    while (t--)
    {
        int n, k, a=0;
        cin >> n >> k;
        string s;
        cin >> s;

        for(int i =1; i<n/2; ++i){

		    a+=s[i]!=s[n-1-i];

        }
        cout << "Case #" << a << ": " << abs(a - k) << endl;
	    //cout << (abs(a-k));
    }
    return 0;
    
}
