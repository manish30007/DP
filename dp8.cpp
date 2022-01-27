#include<bits/stdc++.h>
using namespace std;
int coinCombination(int n,vector<int>&arr,int amt){
    cout<<n<<endl;
    cout<<amt<<endl;
    vector<int>dp(amt+1);
    for(int i=0;i<amt+1;i++){dp[i]=0;}
    dp[0]=1;
   for(int i=0;i<n;i++){
       for(int j=arr[i];j<=amt;j++){
           dp[j]+=dp[j-arr[i]];
       }
   } 
   return dp[amt];
}
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int amt;
  cin>>amt;
   cout<<coinCombination(n,arr,amt);
    
}