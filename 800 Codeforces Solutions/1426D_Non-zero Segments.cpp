#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	cin>>n;
	map<ll, int> m;
	m[0] = 0;
	ll sum = 0;
	int res = 0, ans = 0;
	for (int i = 1; i <= n; ++i) {
	    int a;
	    cin>>a;
	    sum += a;
	    if (m.count(sum) && m[sum] >= ans) {
	    	res++;
	    	ans = i - 1;
	    }
	    m[sum] = i;
	}
	cout<<res<<endl;
	return 0;
} 