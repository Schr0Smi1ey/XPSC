#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n,m;cin >> n >> m;
    string str[n];
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int cost = 0;
            for(int k=0;k<m;k++){
                cost += max((str[i][k]-str[j][k]),(str[j][k]-str[i][k]));
            }
            ans = min(ans,cost);
        }
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