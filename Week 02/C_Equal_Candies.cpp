#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n;cin >>n ;
    int mn = INT_MAX;int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mn = min(mn,arr[i]);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i] -mn;
    }
    cout << sum << endl;

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