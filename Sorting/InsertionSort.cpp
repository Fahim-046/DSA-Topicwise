#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && nums[j-1]>nums[j]){
            swap(nums[j],nums[j-1]);
            j--;
        }
        
        for(auto i:nums)cout<<i<<' ';
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<' ';
    }
    cout<<endl;
}