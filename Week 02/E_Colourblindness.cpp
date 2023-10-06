#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n;cin >> n;
    string a,b;cin >> a >> b;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(a[i] == b[i] || (a[i] == 'G' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'G'))
        continue;
        else{
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
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