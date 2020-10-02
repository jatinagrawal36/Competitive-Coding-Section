#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
		int n,x;
		cin>>n>>x;
		if(n==1||n==2){
			cout<<1<<endl;
		}
		else if(n==3){
			cout<<2<<endl;
		}
		else{
			for(int i=0;i<n;i++){
				if(i*x+3 <= n && n <= (i+1)*x+2){
					cout<<i+2<<endl;
					break;
				}
			}
		}
    }
    return 0;
}


