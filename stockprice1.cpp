//max profit to sell stock only one transaction is allowed
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxprofit(int arr[],int n){
    int lp=INT_MAX;//least price
    int op=0;//overall profit 
    int pist=0;
    priority_queue<int>qp;
    for(int i=0;i<n;i++){
        if(arr[i]<lp){
            lp=arr[i];
            }
        pist=arr[i]-lp;
        if(pist>op){
            op=pist;
            qp.push(pist);
        }
    
    }
    return op;
    }
};
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
Solution o;
int ans =o.maxprofit(arr,n);
cout<<ans<<endl;

return 0;
}