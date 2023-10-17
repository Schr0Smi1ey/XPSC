#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n;cin >> n;
    string str;cin >> str;
    priority_queue<pair<int,int>> pq;
    vector<pair<int,int>> change;
    for(int i=0;i<n;i++){
        if(str[i] == 'L'){
            if(i-0 < n-i-1){
                pq.push({n-i-1,i-0});
            }
        }
        else{
            if(n-i-1 < i-0){
                pq.push({i-0,n-i-1});
            }
        }
    }
    // while(!pq.empty()){
    //     cout << pq.top().first<< " " << pq.top().second << endl;
    //     pq.pop();
    // }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += (str[i] == 'L')?i-0:n-i-1;
    }
    // cout << "sum : " << sum << endl;
    int k = 0;
    for(int i=0;i<n;i++){
        int temp = sum;
        // cout << "pq : " << pq.top().first << " " << pq.top().second <<  endl;
        if(pq.size() == 1){
            temp += pq.top().first;
            temp -= pq.top().second;
        }
        else if(!pq.empty()){
            auto x = pq.top();
            temp += pq.top().first;
            temp -= pq.top().second;
            pq.pop();
            // cout << "After pop : " << pq.top().first << " " << pq.top().second << endl;
            auto y = make_pair(pq.top().first+x.first,pq.top().second+x.second);
            pq.pop();
            pq.push(y);
            // cout << "After pus : " << pq.top().first << " " << pq.top().second << endl;
        }
        cout << temp << " ";
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