#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    string str = "a";
    for(int i=1;i<n;i++){
        if(i >= 2){
            if(str[i-2] == 'a') str += 'b';
            else str += 'a';
        }
        else 
        str += 'a';
    }
    cout << str << endl;
}
signed main()
{
    fastio;
    solution();
    return 0;
}