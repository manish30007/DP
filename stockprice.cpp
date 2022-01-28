//calc. max profit by buy and sell consequently infinite  no of transaction is allowed.
#include<bits/stdc++.h>
using namespace std;
class Sol{
    public:
    int maxprofit(int prices[],int n){
        int bd=0;
        int sd=0;
        int profit=0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                sd++;
            }
            else{
            profit += prices[sd]-prices[bd];
            bd=sd=i;
            }
        }
        profit+=prices[sd]-prices[bd];
        return profit;
    }
};
int main(){
int prices[]={7,1,4,3,6,4};
Sol o;
int ans=o.maxprofit(prices,6);
cout<<ans<<endl;
return 0;
}