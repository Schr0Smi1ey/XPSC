//Atcoder
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int s,t,cnt = 0;cin >> s >> t;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            for(int k=0;k<=100;k++){
                if(i+j+k <= s && (i*j*k) <=t){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}