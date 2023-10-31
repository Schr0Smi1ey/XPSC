#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
bool valid(int n){
    string a,b;
    a = b = to_string(n);
    reverse(a.begin(),a.end());
    return a == b;
}
void solution(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> pal;
    for(int i=0;i<(1<<15);i++){
        if(valid(i)) pal.push_back(i);
    }
    unordered_map<int,int> mp;
    int ans = 0;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        for(int j=0;j<pal.size();j++){
            ans += mp[arr[i]^pal[j]];
        }
    }
    cout << ans << endl;
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