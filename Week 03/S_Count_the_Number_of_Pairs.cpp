#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n,k;cin>>n>>k;
    string str;cin>>str;
    int small[26]={0};
    int capital[26]={0};
    for(int i=0;i<str.size();i++)
    {
        if(islower(str[i]))
        small[str[i]-'a']++;
        else
        capital[str[i]-'A']++;
    }
    int burls = 0;
    for(int i=0;i<26;i++)
    {
        int temp = min(small[i],capital[i]);
        burls+=temp;
        small[i]-=temp;
        capital[i]-=temp;
    }
    for(int i=0;i<26;i++)
    {
        int temp = min(k,small[i]/2);
        burls+=temp;
        k-=temp;
        if(k<=0)
        break;
        temp = min(k,capital[i]/2);
        burls+=temp;
        k-=temp;
        if(k<=0)
        break;
    }
    cout<<burls<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}