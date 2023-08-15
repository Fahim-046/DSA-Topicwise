#include<bits/stdc++.h>
using namespace std;

/*
Approach: We have to push the max element in the last
in every iteraion
*/
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    // Bubble sort algorithm starts here
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<' ';
    }
    cout<<endl;
}