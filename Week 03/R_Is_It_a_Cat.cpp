#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    string fixed = "meow",str,result = "";cin >> str;
    for(int i=0;i<n;i++){
        char c = tolower(str[i]);
        if(result.size() > 0 && result.back() == c);
        else{
            result += c;
        }
    }
    puts((result == fixed)?"YES":"NO");
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