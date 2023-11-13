#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,m;cin >> n >> m;
    int sum = 0;
    for(int i=0;i<m;i++){
        int x;cin >> x;
        sum += x;
    }
    int ans = (n*(n+1LL))/2LL - sum;
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