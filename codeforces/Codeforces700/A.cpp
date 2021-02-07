#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		string a;
		cin >> a;
		int n = a.length();
		string alpha("abcdefghijklmnopqrstuvwxyz");
		for(char i=0; i<n; ++i){
			for(int j = 0; j <26; ++j){
				if(a[i] == alpha[j]){
					if(a[i] == 'z')
						cout <<alpha[j-1];
					else
						cout << alpha[j+1];
					break;
				}
			}
				
		}
		
	cout <<endl;
	
	}
}
