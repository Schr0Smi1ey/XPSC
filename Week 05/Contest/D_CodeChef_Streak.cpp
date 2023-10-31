#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int days(int *arr,int n){
    int cnt = 0;
    for(int i=0;i<n;i++){
        int temp = 0;
        while(i < n && arr[i] > 0){
            temp++;
            i++;
        }
        cnt = max(cnt,temp);
    }
    return cnt;
}
void solution(){
    int n;cin >> n;
    int om[n],addy[n];
    for(int i=0;i<n;i++){
        cin >> om[i];
    }
    for(int i=0;i<n;i++){
        cin >> addy[i];
    }
    int p = days(om,n),q = days(addy,n);
    // cout << p << " " << q << endl; 
    if(p == q){
        cout << "Draw" << endl;
    }
    else if(p > q){
        cout << "Om" << endl;
    }
    else{
        cout << "Addy" << endl;
    }
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