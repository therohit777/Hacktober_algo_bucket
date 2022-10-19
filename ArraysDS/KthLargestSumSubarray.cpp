#include<bits/stdc++.h>
#include<queue>
using namespace std;
int KthLargest(vector<int> &arr,int k){
      vector<int>sumstore;
      int n=arr.size();
      for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            sumstore.push_back(sum);
        }
      }
      sort(sumstore.begin(),sumstore.end());
      return sumstore.size()-k;
}
int main(){
    int n=3;
    vector<int> arr={3, -2, 5};
    int k=3;
    cout<<KthLargest(arr,k);
    return 0;
}
