//atcoder
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int a,b,c,x,i = 1;cin >> a >> b >> c;
    x = c;
    while(x <= b){
        if(x >= a && x <=b){
            cout << x;
            return 0;
        }
        x = c *(++i);
    }
    cout << -1 ;
    return 0;
}