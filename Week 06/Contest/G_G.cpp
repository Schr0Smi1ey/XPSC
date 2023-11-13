#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
void solution(){
    int n,k;cin >> n >> k;
    int cnt = 1;
    for(int i=0;i<n;i++){
        if(k == 0) break;
        cnt = (cnt * k) % MOD;
        k--;
    }
    cout << cnt << endl;
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