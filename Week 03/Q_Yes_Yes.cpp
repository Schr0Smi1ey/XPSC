#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    string a = "",b;
    for(int i=0;i<34;i++){
        a += "Yes";
    }
    cin >> b;
    puts((a.find(b) != string::npos)?"YES":"NO");
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