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
    string str;cin >> str;
    sort(str.begin(),str.end());
    char c = 'a';
    for(int i=0;i<str.size();i++){
        if(str[i] == c){
            while(str[i] == c){
                i++;
            }
        }
        else{
            cout << c;
            return 0;
        }
        i--;c++;
    }
    cout << "None";
    return 0;
}