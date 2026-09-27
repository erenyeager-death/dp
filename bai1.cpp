#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem "VSTEPS"

const ll mod=14062008;

int main()
{
    ll n,k;cin>>n>>k;
    vector<bool>a(n+1,false);
    for (int i=0;i<k;i++){ll x;cin>>x;a[x]=true;}
    vector<ll>dp(n+1,0);
    dp[1]=1;
    for (int i=2;i<=n;i++){
        if (a[i]){
            dp[i]=0;continue;
        }
        if (i>=2)dp[i]=(dp[i-1]+dp[i-2])%mod;
    }
    cout<<dp[n]%mod;
    return 0;
}
