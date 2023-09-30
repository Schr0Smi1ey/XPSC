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
    string str;cin >> str;
    for(int i=0;i<str.size();i++){
        if((i+1)&1){
            cout << str[i];
        }
    }
    return 0;
}