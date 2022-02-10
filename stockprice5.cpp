#include <iostream>//optimized
#include <vector>
#include <climits>

using namespace std;

    void transactions(vector<int> arr,int k){
       int n=arr.size();
       vector<vector<int>>dp(k+1,vector<int>(n));
       for(int t=1;t<=k;t++){
           for(int d=1;d<n;d++){
              int maxx= dp[t][d-1];
            for(int i=0;i<d;i++){
                int ptilltm1=dp[t-1][i];
                int pth=arr[d]-arr[i];
                if(ptilltm1+pth>maxx){
                    maxx=ptilltm1+pth;
                }
            }
            dp[t][d]=maxx;
    }
       }
       cout<<dp[k][n-1];
    }
    int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n,0);

    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    int k ;
    cin>>k;
    
    transactions(arr,k);
    
       return 0;
  }
// #include <iostream>//unoptimized
// #include <vector>
// #include <climits>

// using namespace std;

//     void transactions(vector<int> arr,int k){
//        int n=arr.size();
//        vector<vector<int>>dp(k+1,vector<int>(n));
//        for(int t=1;t<=k;t++){
//                int maxx=INT32_MIN;
//            for(int d=1;d<n;d++){
//                if(dp[t-1][d-1]-arr[d-1]>maxx){
//                    maxx=dp[t-1][d-1]-arr[d-1];
//                }
//                if(maxx+arr[d]>dp[t][d-1]){
//                    dp[t][d]=maxx+arr[d];
//                }
//                else{
//                    dp[t][d]=dp[t][d-1];
//                }
//            }

//        }
//        cout<<dp[k][n-1];
//     }
    
//     int main(){
    
//     int n;
//     cin>>n;
//     vector<int> arr(n,0);

//     for (int i = 0; i < n; i++)
//     {
//       cin>>arr[i];
//     }
//     int k ;
//     cin>>k;
    
//     transactions(arr,k);
    
//        return 0;
//   }
