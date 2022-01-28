//0 1 knapsack
#include <iostream>
#include <vector>

using namespace std;

void zeroOneKnapsack(int n, vector<int> val, vector<int> wt, int cap) {

vector<vector<int>>dp(n+1,vector<int>(cap+1));
for(int i=1;i<=n;i++){
    for(int j=1;j<=cap;j++){
        if(j>=wt[i-1]){
            int rcap=j-wt[i-1];
            if(dp[i-1][rcap]+val[i-1]>dp[i-1][j]){
                dp[i][j]=dp[i-1][rcap]+val[i-1];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
        else{
                dp[i][j]=dp[i-1][j];
            }
    }
}
cout<<dp[n][cap];
}

int main() {

  int n;
  cin >> n;

  vector<int> val(n);
  for (int i = 0; i < n; i++) {
    cin >> val[i];
  }

  vector<int> wt(n);
  for (int i = 0; i < n; i++) {
    cin >> wt[i];
  }

  int cap;
  cin >> cap;

  zeroOneKnapsack(n, val, wt, cap);


}