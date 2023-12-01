#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    for(int i=2;i<=n;i++){
        if(__gcd(i,n-i-1) == 1){
            cout << i << " " << n-i-1 << " " << 1 << endl;
            return ;
        }
    }
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}