#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int a,b,c,x,y;cin >> a >> b >> c >> x >> y;
    if(max(0LL,x-a) + max(0LL,y-b) <= c){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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