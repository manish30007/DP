#include <bits/stdc++.h>

using namespace std;


int collectGold(int n, int m, vector<vector<int>>& arr, vector<vector<int>>& dp) {
    for(int j=m-1;j>=0;j--){
        for(int i=n-1;i>=0;i--){
            if(j==m-1){
                dp[i][j]=arr[i][j];
            }else if(i==0){
                dp[i][j]=max(dp[i][j+1],dp[i+1][j+1])+arr[i][j];
            }
            else if(i==n-1){
                dp[i][j]=max(dp[i][j+1],dp[i-1][j+1])+arr[i][j];
            }
            else{
                dp[i][j]=max(dp[i][j+1],max(dp[i-1][j+1],dp[i+1][j+1]))+arr[i][j];
            }
        }
    }
    int maxval=dp[0][0];
for(int i=1;i<n;i++){
    if(dp[i][0]>maxval){
        maxval=dp[i][0];
    }
}
return maxval;
}



int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> arr(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  } 

  vector<vector<int>> dp(n, vector<int>(m, 0));

  cout << collectGold(n, m, arr, dp);

}