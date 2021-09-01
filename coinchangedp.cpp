#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//use /n instead of endl if tle for big inputs
int bottomup(int M, vector<int> denom)
{
vector<int>dp(M+1,0);
dp[0]=0;
for (int i = 1; i <= M; i++)
{
    dp[i]=INT_MAX;
    for (int c : denom )
    {
        if(i-c>=0 && dp[i-c]!= INT_MAX)
        {
            dp[i]=min(dp[i],dp[i-c]+1);
        }        
    } 
}
if(dp[M]==INT_MAX)
return -1;
else
return dp[M];
}

int recur(int M,vector<int> denom)
{
    if(M==0)
    return 0;
    int res=INT_MAX;
    
    for (int i : denom)
    {
        if(i<=M)
        {
        int subres=recur(M-i,denom);
        if(subres!=INT_MAX && subres+1<res)
        res=subres+1;    
        }    
    }
    return res;
}

int main()
{
    int n,M;
    cin>>n>>M;
    vector<int>denom(n);
    for (int i = 0; i < n; i++)
    {
        cin>>denom[i];
    }
      
    cout<<bottomup(M,denom)<<endl;
    cout<<recur(M,denom)<<endl;

return 0;
}
