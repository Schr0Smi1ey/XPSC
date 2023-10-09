#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
signed main()
{
    fastio;
    int n;cin >> n;
    while(true){
        int x = ++n;
        string str = to_string(n);
        bool flag = true;
        for(int i=0;i<str.size();i++){
            for(int j=i+1;j<str.size();j++){
                if(str[i] == str[j]){
                    flag = false;
                }
            }
        }
        if(flag){
            cout << str;
            break;
        }
    }
    return 0;
}