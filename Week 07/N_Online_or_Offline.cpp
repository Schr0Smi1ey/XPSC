#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    double n,m;cin >> n >> m;
    n = n-((n*10)/100);
    if(n > m){
        cout << "DINING" << endl;
    }
    else if (n < m){
        cout << "ONLINE" << endl;
    }
    else {
        cout << "EITHER" << endl;
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