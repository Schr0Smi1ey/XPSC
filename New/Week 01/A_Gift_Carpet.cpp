#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
        tree_order_statistics_node_update>;
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,m;cin >> n >> m;
    char str[n][m];
    string temp = "vika";int p = 0,last = -1;
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> str[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(str[j][i] == temp[p] && i > last){
                p++;last = i;
            }
        }
        if(p == 4) break;
    }
    if(p == 4){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int32_t main() {
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
