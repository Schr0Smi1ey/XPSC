#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
// using suffix sum
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    cin >> arr[i];
    arr[n] = 0;
    for(int i=n-1;i>=0;i--)
    {
        arr[i] = arr[i] + arr[i+1];
    }
    int q;cin >> q;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << arr[l] - arr[r+1] << endl;
    }
    return 0;
}