#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    for(int i=0;i<n-1;i++){
        int mn = INT_MAX, ind;
        for(int j=i;j<n;j++){
            if(nums[j]<mn){
                mn=nums[j];
                ind = j;
            }
        }
        swap(nums[i],nums[ind]);
    }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<' ';
    }
    cout<<endl;
}