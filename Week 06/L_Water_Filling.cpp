#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int a,b,c;cin >> a >> b >> c;
    if(a+b+c == 3 || a+b+c == 2){
        cout << "Not now" << endl;
    }
    else{
        cout << "Water filling time" << endl;
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