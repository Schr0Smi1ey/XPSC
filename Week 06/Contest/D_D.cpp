#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int a,b;cin >> a >> b;
    if(a % 2 != 0 && b % 2 != 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
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