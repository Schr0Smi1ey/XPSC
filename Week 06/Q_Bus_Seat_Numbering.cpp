#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    if(n <= 15){
        if(n <= 10){
            cout << "Lower Double" << endl;
        }
        else{
            cout << "Lower Single" << endl;
        }
    }
    else{
        if(n <= 25){
            cout << "Upper Double" << endl;
        }
        else{
            cout << "Upper Single" << endl;
        }
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