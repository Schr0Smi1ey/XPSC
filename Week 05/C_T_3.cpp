#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int search(int *arr,int n,int c){
    int low = 1,high = 1000000000,ans = INT_MIN;
    while(low <= high){
        int cnt = 1;
        int last = arr[0];
        int mid = low + (high - low)/2;
        for(int i = 1;i<n;i++){
            if((arr[i] - last) >= mid){
                last = arr[i];
                cnt++;
            }
        }
        if(cnt >=  c){ // condition : ( >= )
            ans = max(ans,mid);
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
void solution(){
    int n,c;cin >> n >> c;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << search(arr,n,c) << endl;
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