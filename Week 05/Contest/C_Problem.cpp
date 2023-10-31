#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int a,b;cin >> a >> b;
    int x = 0;
    while(true){
        if(a > b){
            a--;
            b++;
        }
        else if( b > a){
            b--;
            a+=3;
        }
        else{
            cout << "YES" << endl;
            return ;
        }
        x++;
        if(x == 500){
            cout << "NO" << endl;
            return;
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