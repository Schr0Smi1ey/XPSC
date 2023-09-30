//Spoj
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int t,k;cin >> t >> k;int cnt = 0;
    while(t--)
    {
        int x;cin >> x;
        if(x % k == 0){
            cnt++;
        }
    }
    cout << cnt ;
    return 0;
}