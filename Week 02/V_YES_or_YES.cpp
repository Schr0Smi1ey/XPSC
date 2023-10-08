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
    int t;cin >> t;
    string fixed = "yes";
    while(t--){
        string str;cin >> str;
        bool flag = true;
        for(int i=0;i<3;i++){
            flag &= (tolower(str[i]) == fixed[i]);
        }
        puts(flag?"YES":"NO");
    }
    return 0;
}