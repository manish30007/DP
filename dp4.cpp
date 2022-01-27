#include<bits/stdc++.h>
using namespace std;

int jumpT( int n, vector<int>& jumps, vector<int>& dp)
{dp[n]=0;
for(int i=n-1;i>=0;i--){
    int minval=11;
    for(int j=1;j<=jumps[i]&&i+j<n+1;j++){
        int f=dp[i+j]+1;
        minval=min(f,minval);
    }
    dp[i]=minval;
}return dp[0];

}

int main() {

  int n;
  cin >> n;

  vector<int> jumps(n);

  for (int i = 0; i < n; i++)
  {
    cin >> jumps[i];
  }

  vector<int> dp(n + 1, 0);

  int ans = jumpT( n, jumps, dp);

  if (ans < 30)
    cout << ans;
  else
    cout << "null";
}