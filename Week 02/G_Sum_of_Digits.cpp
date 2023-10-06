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
    string str;cin >> str;
    int sum = 0,cnt = 0;
    while(str.size() != 1){
        sum = 0;
        for(int i=0;i<str.size();i++){
            sum += str[i] - '0';
        }
        if(str.size() != 1){
            cnt++;
        }
        else{
            break;
        }
        str = to_string(sum);
    }
    cout << cnt << endl;
    return 0;
}