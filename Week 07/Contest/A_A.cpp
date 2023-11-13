#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    string a = "",b = "";
    for(int i=0;i<6;i++){
        char x;cin >> x;
        if(i < 3){
            a += x;
        }
        else{
            b += x;
        }
    }
    sort(a.begin(),a.end(),greater<char>());
    sort(b.begin(),b.end(),greater<char>());
        int c = stoll(a),d = stoll(b);
    if(c == d){
        cout << "Tie" << endl;
    }
    else if(c > d){
        cout << "Alice" << endl;
    }
    else{
        cout << "Bob" << endl;
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