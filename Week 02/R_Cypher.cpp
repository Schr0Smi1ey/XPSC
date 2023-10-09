#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    string str;
    int x;
    for(int i=0;i<n;i++){
        cin >> x >> str;
        for(int j=0;j<x;j++){
            if(str[j] == 'D'){
                if(arr[i] == 9)
                arr[i] = 0;
                else{
                    arr[i]++;
                }
            }
            else{
                if(arr[i] == 0){
                    arr[i] = 9;
                }
                else{
                    arr[i]--;
                }
            }
        }
    }
    for(auto x : arr){
        cout << x  << " ";
    }
    cout << endl;
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