#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
void solution(){
    int n,m,h;cin >> n >> m >> h;
    int arr[n],power[m];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<m;i++){
        cin >> power[i];
    }
    sort(arr,arr+n,greater<int>());
    sort(power,power+m,greater<int>());
    int total = 0;
    for(int i=0;i<min(n,m);i++){
        total += min(power[i]*h,arr[i]);
    }
    cout << total << endl;
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