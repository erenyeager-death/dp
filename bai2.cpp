#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n),dp(n+1,1),t;
    for (int i=0;i<n;i++){
        ll x;
        cin>>x;
        auto it=lower_bound(t.begin(),t.end(),x);
        if (it==t.end())t.push_back(x);
        else *it=x;
    }
    cout<<t.size()<<"\n";
    for (auto it:t)cout<<it<<" ";
    return 0;
}
