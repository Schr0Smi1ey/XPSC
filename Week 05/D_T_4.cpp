#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
bool fillcontainer(int *vessel,int n,int c,int mid){
    int sum = 0,cnt = 1;
    for(int i=0;i<n;i++){
        if(vessel[i] > mid){return false;}
        if(sum + vessel[i] > mid){
            if(cnt == c){
                return false;
            }
            cnt++;
            sum = 0;
        }
        sum += vessel[i];
    }
    return cnt <= c;
}
int search(int *vessel,int n,int c){
    int low = 1,high =  100000000,ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(fillcontainer(vessel,n,c,mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
signed main()
{
    fastio;
    int n,c;
    while(cin >> n >> c){
        int vessel[n];
        for(int i=0;i<n;i++){
            cin >> vessel[i];
        }
        cout << search(vessel,n,c) << endl;
    }
    return 0;
}