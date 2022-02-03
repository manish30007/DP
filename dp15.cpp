#include<bits/stdc++.h>
using namespace std;
long long int partition(int n,int k){
if(k==0||n==0||n<k){
        return 0;
    }
vector<vector<long long int>>dp(k+1,vector<long long int>(n+1,0));
for(int t=1;t<=k;t++){
    for(int p=1;p<=n;p++){
        if(p<t){dp[t][p]=0;
        }
        else if(p==t){dp[t][p]=1;
        }
        else{
        dp[t][p]=dp[t-1][p-1]+t*dp[t][p-1];
            
        }
    }
}
return dp[k][n];
    }
int main(){
    int n;
    int k;
    cin>>n>>k;
    cout<<partition(n, k);
    return 0;
}
