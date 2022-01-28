//unbounded knapsack
#include <iostream>
#include <vector>

using namespace std;

void unboundedKnapsack(int n, vector<int> val, vector<int> weight, int cap) {

vector<int>dp(cap+1);
dp[0]=0;
for(int i=0;i<n;i++){
    for(int j=1;j<=cap;j++){
        if(j>=weight[i]){
            if(dp[j-weight[i]]+val[i]>dp[j]){
                dp[j]=dp[j-weight[i]]+val[i];
            }
        }
    }
}
cout<<dp[cap];
}


int main() {

  int n;
  cin >> n;
  vector<int> val(n);
  for (int i = 0; i < n; i++) {

    cin >> val[i];
  }
  vector<int> weight(n);
  for (int i = 0; i < n; i++) {
    cin >> weight[i];
  }
  int cap;
  cin >> cap;

  unboundedKnapsack(n, val, weight, cap);


}