#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int a,b,c,d;cin >> a >> b >> c >> d;
    if(a > (b+c+d) || (b > (a+c+d)) || (c > (a+b+d)) || (d > (a+b+c))){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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