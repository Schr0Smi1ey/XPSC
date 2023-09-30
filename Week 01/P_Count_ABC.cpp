//Atcoder
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int n,cnt = 0;string str;
    cin >> n >> str;
    int pos = str.find("ABC");
    while(pos != string::npos){
        cnt++;
        pos = str.find("ABC",++pos);
    }
    cout << cnt;
    return 0;
}