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
        int rating;
        cin >> rating;
        if(rating <=1399){
            cout << "Division 4" << endl;
        }
        else if(rating <= 1599){
            cout << "Division 3" << endl;
        }
        else if(rating <= 1899){
            cout << "Division 2" << endl;
        }
        else{
            cout << "Division 1" << endl;
        }
    }
    return 0;
}