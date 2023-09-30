// atcoder
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    double a,b;cin >> a >> b;
    cout << fixed << setprecision(18) << ((a-b)/a)*100 ;
    return 0;
}