#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
int lower(int *arr,int n,int x){
    int low = 0,high = n-1,ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] < x){
            ans = arr[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
int upper(int *arr,int n,int x){
    int low = 0,high = n-1,ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] > x){
            ans = arr[mid];
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
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int q;cin >> q;
    int query[q];
    for(int i=0;i<q;i++){
        cin >> query[i];
        int x = lower(arr,n,query[i]),y = upper(arr,n,query[i]);
        if(x == -1){
            cout << "X "; 
        }
        else {
            cout << x << " ";
        }
        if(y == -1){
            cout << "X";
        }
        else{
            cout << y;
        }
        cout << endl;
    }
}