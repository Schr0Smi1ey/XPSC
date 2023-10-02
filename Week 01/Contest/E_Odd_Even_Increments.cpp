#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n ;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bool odd,even;
    if(arr[0] & 1){odd = true;even = false;
    }
    else{even = true;odd = false;
    }
    bool odd1,even1;
    if(arr[1] & 1){odd1 = true;even1 = false;
    }
    else{even1 = true;odd1 = false;
    }
    for(int i=0;i<n;i++){
        if(i % 2==0){
            if(odd){
                if(arr[i] % 2 == 0){
                    odd = false;
                }
            }
            else{
                if(arr[i] % 2 != 0){
                    even = false;
                }
            }
        }
        if(i % 2 !=0){
            if(odd1){
                if(arr[i] % 2 == 0){
                    odd1 = false;
                }
            }
            else{
                if(arr[i] % 2 != 0){
                    even1 = false;
                }
            }
        }
    }
    if((odd || even) && (odd1 || even1)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
signed main()
{
    // fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}