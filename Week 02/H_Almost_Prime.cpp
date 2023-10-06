#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
bool prime[3000];
bool is_prime(int n){
    if(n<=3)
        return true;
    if(n%2 == 0 || n%3 == 0)
        return false;
    for(int i = 5;i*i<=n;i++){
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true;
}
bool is_almost_prime(int n){
    int cnt = 0;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0 && prime[i]){
            cnt++;
        }
        if((n%i==0) && (n/i) != i && prime[n/i])
        cnt++;
    }
    if(cnt == 2){
        return true;
    }
    return false;
}
signed main()
{
    fastio;
    int n;cin >> n;
    int cnt = 0;
    for(int i=2;i<=3000;i++){
        prime[i] = is_prime(i);
    }
    for(int i=6;i<=n;i++){
        if(is_almost_prime(i)){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}