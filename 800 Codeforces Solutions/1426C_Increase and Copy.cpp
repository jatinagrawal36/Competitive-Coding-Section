#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin >> t;
	while (t--){
        int n;
        cin>>n;
        double res = pow(n, 0.5);
        int count;
        if(round(res) == res)
            count = ((2 * res) - 2);
        else 
            count = ((2* res)-1);
 
        cout<<count<<endl;
    }
    return 0;
} 