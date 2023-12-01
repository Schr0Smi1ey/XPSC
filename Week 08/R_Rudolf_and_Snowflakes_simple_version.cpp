#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    set<int> st;
    for(int i=2;i*i<=n;i++){
        if((n-1)%i == 0){
            st.insert(i);
            st.insert(n/i);
        }
    }
    for(auto x : st){
        int temp = n - 1,k = 1;
        while(temp > 0){
            temp -= pow(x,k);k++;
        }
        if(temp == 0){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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