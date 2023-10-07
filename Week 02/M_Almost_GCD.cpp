#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int mx = arr[n-1],ans = 0,cnt = INT_MIN;
    for(int i=2;i<=mx;i++){
        int temp = 0;
        for(int j=0;j<n;j++){
            if(arr[j] % i == 0){
                temp++;
            }
        }
        if(temp >= cnt){
            ans = i;
            cnt = temp;
        }
    }
    cout << ans ;
    return 0;
}