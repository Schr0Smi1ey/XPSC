#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,k,l;cin >> n >> k >> l;
    vector<int> v;
    for(int i=0;i<n;i++){
        int m,la;cin >> m >> la;
        if(la == l){
            v.push_back(m);
        }
    }
    if(v.size() < k){
        cout << -1 << endl;
        return;
    }
    sort(v.begin(),v.end(),greater<int>());
    int len = 0;
    for(int i=0;i<k;i++){
        len += v[i];
    }
    cout << len << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}