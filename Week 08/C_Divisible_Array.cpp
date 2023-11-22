#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n-1];
    int sum = 0;
    for(int i=0;i<n-1;i++){
        arr[i] = i+2;
        sum += arr[i];
    }
    // cout << "su : " << ((sum/n)+2)*n << " " << sum << endl;
    cout << ((sum/n)+1)*n - sum << " ";
    for(auto x : arr){
        cout << x << " ";
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