#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
    public:
    vector<vector<int>> threeSum(vector<int>& nums){
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>>s;
        vector<vector<int>> output;
        for(int i =0; i<nums.size(); i++){
            int j = i+1;
            int k = nums.size() - 1;

            while (j<k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == target){
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }else if(sum < target){
                    j++;
                }else{
                    k--;
                }
            }
            
        }

        for(auto at:s){
            output.push_back(at);
        }
        return output;
    }
};

int main(){
    
    vector<int>nums = {-1, 0, 1, 2, -1, -4};

    Solution s;
    vector<vector<int>> ans = s.threeSum(nums);

    for(vector<int> triplet : ans){
    cout<<"[";
    for(int num : triplet){
        cout<<num<<",";
    }
    cout<<"]";
   }

}