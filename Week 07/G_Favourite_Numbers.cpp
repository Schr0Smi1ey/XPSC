#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    if(n%2==0 && n%7==0){
        cout << "Alice" << endl;
    }
    else if(n%2 != 0 && n%9 == 0){
        cout << "Bob" << endl;
    }
    else{
        cout << "Charlie " << endl;
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