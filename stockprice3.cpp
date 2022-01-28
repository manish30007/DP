#include <iostream>
#include <vector>

using namespace std;

void transactions(vector<int> arr, int fee) {
int obsp=-arr[0];
int ossp=0;
int n=arr.size();
for(int i=1;i<n;i++){
int nbsp=0;
int nssp=0;
if(ossp-arr[i]>obsp){
    nbsp=ossp-arr[i];
}
else{
    nbsp=obsp;
}
if(arr[i]+obsp>ossp){
    nssp=arr[i]+obsp;
}
else{
    nssp=ossp;
}
obsp=nbsp;
ossp=nssp;
}
cout<<ossp<<endl;
}
int main() {
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }
  int fee;
  cin >> fee;

  transactions(arr, fee);

  return 0;
}