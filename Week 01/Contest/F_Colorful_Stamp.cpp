#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n;cin >> n;
    string str;cin >> str;
    for(int i=0;i<n;i++){
        if(str[i] == 'W'){
            continue;
        }
        int b=0,r = 0;
        while(i < n && str[i] != 'W'){
            (str[i] == 'B')?b++:r++;i++;
        }
        if(b == 0 || r==0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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