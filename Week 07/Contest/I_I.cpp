#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    priority_queue<int> pq;
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        sum += x;
        pq.push(-x);
    }
    cout << sum <<" ";
    while(!pq.empty())
    {
        sum += pq.top();
        if(sum == 0)break;
        cout << sum << " ";
        pq.pop();
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