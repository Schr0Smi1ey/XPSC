#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 +5;
typedef pair<int,int> pii;

void solution(){
    int n,k,d;cin >> n >> k >> d;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    set<int> st;
    int ans = INT_MAX;
    for(int i=0;i<=n-d;i++){
        for(int j = 0;j<d;j++){
            st.insert(arr[i+j]);
        }
        int x = st.size();
        ans = min(ans,x);
        st.clear();
    }
    cout << ans << endl;
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}