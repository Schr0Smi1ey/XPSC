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
    int n,k;cin >> n >> k;
    int arr[n];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = 0,i = 0, j = 0,unique = 0;
    while(i < n){
        if(mp.find(arr[i]) == mp.end()){
            unique++;
        }
        mp[arr[i]]++;
        while(unique > k){
            mp[arr[j]]--;
            if(mp[arr[j]] == 0){
                unique--;
                mp.erase(arr[j]);
            }
            j++;
        }
        ans += (i - j + 1);
        i++;
    }
    cout << ans << endl;
}

int32_t main() {
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    // cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
