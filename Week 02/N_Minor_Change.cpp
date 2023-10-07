#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
signed main()
{
    fastio;
    string a,b;cin >> a >> b;
    int cnt = 0;
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i]){
            cnt++;
        }
    }
    cout << cnt ;
    return 0;
}