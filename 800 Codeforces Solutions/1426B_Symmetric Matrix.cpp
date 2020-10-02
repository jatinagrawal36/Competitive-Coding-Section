#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t; 
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		bool res = false;
		for(int i=0;i<n;i++) {
			int a, b, c, d;
			cin >> a >> b >> c >> d;
			if (b == c) {
				res = true;
			}
		}
		if (m % 2 == 0 && res) {
			cout << "YES"<<endl;
		} else {
			cout << "NO"<<endl;
		}
	}
	return 0;
}