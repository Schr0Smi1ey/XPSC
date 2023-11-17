#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,x;cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int cnt = 0,sum = 0,j = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        while(sum > x){
            sum -= arr[j++];
        }
        if(sum == x) cnt++;
    }
    cout << cnt << endl;
}
signed main()
{
    fastio;
    solution();
    return 0;
}