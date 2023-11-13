#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
bool isvowel(char ch){
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
void solution(){
    int n,k;cin >> n >> k;
    string str;cin >> str;
    int ans = 1,vowel = 0,lastvowel = -1;
    for(int i=0;i<n;i++){
        if(isvowel(str[i])){
            if(vowel == 0 && lastvowel != -1){
                ans = ans*(i - lastvowel) % MOD;
            }
            vowel++;
            if(vowel == k){
                vowel = 0;lastvowel = i;
            }
        }
    }
    cout << ans << endl;
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