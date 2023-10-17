#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n;cin >> n;
    int arr[n],a[n];
    int odd_min = INT_MAX;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] & 1){
            odd_min = min(odd_min,arr[i]);
        }
    }
    if(odd_min == INT_MAX){
        cout << "YES" << endl;
        return ;
    }
    else{
        bool flag = true;
        for(int i = 0;i<n;i++){
            if(arr[i]&1){
                a[i] = arr[i] - odd_min;
                if(a[i] <= 0){
                    flag = false;
                    break;
                }
            }
            else{
                a[i] = arr[i];
            }
        }
        if(flag){
            cout << "YES" << endl;
            return;
        }
        flag = true;
        for(int i = 0;i<n;i++){
            if(arr[i] % 2 == 0){
                a[i] = arr[i] - odd_min;
                if(a[i] <= 0){
                    flag = false;
                    break;
                }
            }
            else{
                a[i] = arr[i];
            }
        }
        if(flag){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
    int even_min = INT_MAX,odd_min = INT_MAX;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] & 1){
            odd_min = min(odd_min,arr[i]);
        }
        else{
            even_min = min(even_min,arr[i]);
        }
    }
    if(even_min == INT_MAX || odd_min == INT_MAX){
        cout << "YES" << endl;
        return ;
    }
    if(even_min > odd_min){
        cout << "YES" << endl;
        return; 
    }
    cout << "NO" << endl;
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