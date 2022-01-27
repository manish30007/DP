#include<bits/stdc++.h>
using namespace std;
int countpath(int n,int arr[]){
    if(n==0)return 1;
    if(n<0)return 0;
    if(arr[n]>0){return arr[n];}
    int n1=countpath(n-1,arr);
    int n2=countpath(n-2,arr);
    int n3=countpath(n-3,arr);
    int fp=n1+n2+n3;
    arr[n]=fp;
    return fp;
}



int cp(int n){
    int dp[n+1];
    dp[0]=1;
    for(int i=1;i<=n;i++){
if(i==1)dp[i]=dp[i-1];
else if(i==2)dp[i]=dp[i-1]+dp[i-2];
else dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    return dp[n];
}
int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n+1];
for(int i=0;i<n+1;i++)arr[i]=0;
cout<<countpath(n,arr)<<endl;
cout<<cp(n)<<endl;

}
return 0;
}