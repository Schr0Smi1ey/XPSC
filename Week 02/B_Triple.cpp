#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n;cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        mp[x]++;
    }
    for(auto x : mp){
        if(x.second >=3){
            cout << x.first << endl;
            return ;
        }
    }
    cout << -1 << endl;
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