#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
void solution(){
    int n,b;cin >> n >> b;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int andd = -1; // all bits are 1
    for(int i=0;i<n;i++){
        if((arr[i] & b) == b){
            andd &= arr[i];
        }
    }
    if(andd == b) cout << "YES" << endl;
    else
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