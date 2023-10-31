#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1000000007;
void solution(){
    int n;cin >> n;
    int even = 0,odd = 0;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        if(!(x&1))even++;
        else odd++;
    }
    int ans = 1;
    for(int i=0;i<even;i++){
        ans =(ans*2)%MOD;
    }
    cout << (odd?ans:ans-1) << endl;
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