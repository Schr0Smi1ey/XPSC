#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    string str;cin >> str;
    int alice = 0,bob = 0;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(str[i] == 'A'){
            if(flag){
                alice++;
            }
            else{
                flag = true;
            }
        }
        else{
            if(flag){
                flag = false;
            }
            else{
                bob++;
            }
        }
    }
    cout << alice << " " << bob << endl;
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