#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(arr[j] - arr[i] == arr[k] - arr[j]){
                    cout << "No" << endl;
                    return;
                }
            }
        }
    }
    cout << "Yes" << endl;
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