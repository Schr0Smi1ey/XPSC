#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(n == 1){
        cout << arr[0] << endl;
        return;
    }
    int ans = abs(arr[0] - arr[1]);
    for(int i=1;i<n;i++){
        if(i == n-1){
            ans = min(ans,abs(arr[i]-arr[i-1]));
            continue;
        }
        ans = min(ans,max(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1])));
    }
    cout << ans << endl;
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