#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
    public:
    vector<vector<int>> fourSum (vector<int>&nums, int target){
        sort(nums.begin(), nums.end());
        set<vector<int>>st;
        vector<vector<int>>output;
        for(int i = 0; i<nums.size() - 3; i++){
            for(int j = i+1; j<nums.size() - 2; j++){
                for(int k = j+1; k<nums.size() - 1; k++){
                    for(int l = k+1; l<nums.size(); l++){
                        int sum = (long long) nums[i] + (long long) nums[j] + (long long) nums[k] + (long long) nums[l];
                        if(sum == target){
                            st.insert({nums[i], nums[j], nums[k], nums[l]});
                        }
                    }
                }
            }
        }
        
        for(auto at : st){
            output.push_back(at);
        }

        return output;
    }
};

int main(){
    vector<int>nums = {1,0,-1,0,-2,2};
    int target = 0;

    Solution s;
    vector<vector<int>> ans = s.fourSum(nums, target);

    for(vector<int> ans1 : ans){
        cout<<"[";
        for(int ans2 : ans1){
            cout<<ans2<<",";
        }
        cout<<"]"<<",";
    } 
}