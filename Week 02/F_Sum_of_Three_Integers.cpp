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
    int k,s;cin >> k >> s;
    int cnt = 0;
    for(int i=0;i<=k;i++){
        for(int j = 0;j<=k;j++){
            int temp = s - i - j;
            if(temp >=0 && temp <=k){
                cnt++;
            }
        }
    }
    cout << cnt ;
    return 0;
}