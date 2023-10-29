#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
signed main()
{
    fastio;
    int n;cin >> n;
    string str[n];
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    set<string> st;
    string ans = "";
    for(int i=n-1;i>=0;i--){
        if(st.insert(str[i]).second){
            ans += str[i][str[i].size()-2];
            ans += str[i][str[i].size()-1];
        }
    }
    cout << ans;
    return 0;
}