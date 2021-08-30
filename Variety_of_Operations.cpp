#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//use /n instead of endl if tle for big inputs
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
ll c,d;
cin>>c>>d;
ll big=abs(c-d);
ll ans=0;
if(c==d)
{
    if(c==0)
    ans=0;
else
ans=1;
}
else if(big%2==0)
ans=2;
else
ans=-1;
cout<<ans<<"\n";
}
return 0;
}
