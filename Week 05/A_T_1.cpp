#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
int search(int *arr,int n,int x){
    int low = 0,high = n - 1,ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == x){
            ans = mid + 1; 
            high = mid - 1;
        }
        else if(arr[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
signed main()
{
    fastio;
    int tc = 1;
    while(true){
        int n,q;cin >> n >> q;
        if(n == 0 && q == 0){break;}
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        cout << "CASE# " << tc++ << ":" << endl;
        for(int i=1;i<=q;i++){
            int x;cin >> x;
            int ans = search(arr,n,x);
            if(ans == -1){
                cout << x << " not found" << endl;
            }
            else{
                cout << x << " found at " << ans << endl;
            }
        }
    }
    return 0;
}