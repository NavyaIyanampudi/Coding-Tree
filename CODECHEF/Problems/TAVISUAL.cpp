#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,c,q,l,r;
	    cin >> n >> c >> q;
	    while(q--){
	        cin >> l >> r;
	        if(c>=l && c<=r){
	            c = l+r-c;
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}
