#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int ans(int *arr,int n){
    int cnt = 0,temp = 0;
    for(int i=0;i<n;i++)
    {
        temp = 0;
        while(i<n && arr[i] != 0)
        {
            temp++;i++;
            if(i>=n)
            break;
        }
        cnt = max(temp,cnt);
    }
    return cnt;
}
void solution(){
    int n;cin>>n;
    int om[n],addy[n];
    for(int i=0;i<n;i++)
    cin >> om[i];
    for(int i=0;i<n;i++)
    cin >> addy[i];
    int om_count = ans(om,n),addy_count = ans(addy,n);
    if(om_count == addy_count)
    {
        cout<<"Draw"<<endl;
    }
    else if(om_count > addy_count){
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