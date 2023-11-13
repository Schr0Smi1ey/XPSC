#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    map<int,int> mp;
    for(int i=0;i<2*n;i++){
        int x;cin >> x;
        mp[x]++;
    }
    int ans = INT_MIN;
    for(auto x : mp){
        ans = max(ans,x.second);
    }
    cout << ans << endl;
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