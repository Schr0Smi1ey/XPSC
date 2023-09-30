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
    int a,b,c;cin >> a >> b >> c;
    int sum = 0;
    while(c >= a){
        sum += b;
        c -= a;
    }
    cout << sum;
    return 0;
}