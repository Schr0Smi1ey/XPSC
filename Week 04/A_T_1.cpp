#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i < (1 << n);i++){
        int temp = 0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                temp += arr[j];
            }
            else{
                temp -= arr[j];
            }
        }
        if(temp % 360 == 0){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}