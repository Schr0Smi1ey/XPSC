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
    string str;cin >> str;
    if(str.size() == 4){
        cout << str;
    }
    else{
        int x = 4 - str.size();
        while(x--){
            cout << 0 ;
        }
        cout << str;
    }
    return 0;
}