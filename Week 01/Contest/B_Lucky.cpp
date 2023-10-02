#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        string str;cin >> str;
        int sum1 =0,sum2 = 0;
        for(int i=0;i<str.size();i++){
            if(i<3){
                sum1 += (str[i] - '0');
            }
            else{
                sum2 += (str[i]-'0');
            }
        }
        if(sum1 == sum2){
            cout << "YES"<< endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}