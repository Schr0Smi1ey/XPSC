#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,k;cin >> n >> k;
    int arr[n];
    int andd = -1;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if((arr[i]&k) == k){
            andd &= arr[i];
        }
    }
    puts(andd == k?"YES":"NO");
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