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
typedef pair<int,int> pii;
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 2e5 +5;

void solution(){
    string a,b;cin >> a >> b;
    int n = a.size();
    vector<int> zero,one;
    if(a == b){
        cout << "YES" << endl;return;
    }
    for(int i=0;i<n-1;i++){
        if(a[i] == b[i]){
            if(a[i] == '0' && (a[i+1] == b[i+1] && a[i+1] == '1')){
                cout << "YES" << endl;return;
            }
        }
    }
    cout << "NO" << endl;
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