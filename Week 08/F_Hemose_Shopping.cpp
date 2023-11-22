#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,x;cin >> n >> x;
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(i-0 < x && n-i-1 < x && arr[i] != temp[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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