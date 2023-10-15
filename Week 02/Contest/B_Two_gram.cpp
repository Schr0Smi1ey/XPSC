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
    string str; cin >> str;
    string ans = "";
    int cnt = INT_MIN;
    for(int i=0;i<str.size()-1;i++){
        string temp = str.substr(i,2);
        int flag = 0;
        int pos = str.find(temp);
        while(pos != string::npos){
            flag++;
            pos = str.find(temp,pos+1);
        }
        if(flag > cnt){
            ans = temp;
            cnt = flag;
        }
        temp.clear();
    }
    cout << ans << endl;
    return 0;
}