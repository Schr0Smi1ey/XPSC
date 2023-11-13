#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int calc(char a,char b){
    return min(abs('9'-max(a,b)+min(a,b)-'0' + 1),abs(b-a));
}
void solution(){
    int m,n;cin >> m >> n;
    string a,b;cin >> a >> b;
    if(a.find(b) != string ::npos){
        cout << 0 << endl;return;
    }
    int ans = INT_MAX;
    for(int i=0;i<m;i++){
        int temp = 0;
        for(int j = 0;j<n;j++){
            temp += calc(a[i+j],b[j]);
        }
        ans = min(temp,ans);
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