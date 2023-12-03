#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,k;cin >> n >> k;
    static int x = 1;
    cout << "Case " << x++ << ":" << endl;
    string str = "";
    for(int i=0;i<n;i++){
        str += (i + 'A');
    }
    do{
        cout << str << endl;
        k--;
    }
    while(next_permutation(str.begin(),str.end()) && k);
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