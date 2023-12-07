#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin >> n;
    if(n % 2 == 0){
        int x = n/2;
        cout << x << endl;
        while(x--){
            cout << 2 << " ";
        }
    }
    else{
        int x = (n-3)/2;
        cout << x + 1 << endl;
        while(x--){
            cout << 2 << " ";
        }
        cout << 3;
    }
    return 0;
}