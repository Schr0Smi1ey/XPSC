#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,k;cin >> n >> k;
    int arr[n],b[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        b[i] = arr[i];
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        if(i-0 < k && n-i-1 < k)continue;
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    int j = 0;
    for(int i=0;i<n;i++){
        if(i-0 < k && n-i-1 < k) cout << arr[i] << " ";
        else cout << v[j++] << " ";
    }
    cout << endl;
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