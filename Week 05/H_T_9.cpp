#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
bool valid(int *arr,int n,int m,int mid){
    int total = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > mid){
            total += (arr[i] - mid);
        }
    }
    return total >= m;
}
int search(int *arr,int n,int m){
    int low = 0,high = *max_element(arr,arr+n),ans;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(valid(arr,n,m,mid)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
signed main()
{
    fastio;
    int n,m;cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << search(arr,n,m);
    return 0;
}