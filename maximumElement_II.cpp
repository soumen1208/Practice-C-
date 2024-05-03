#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> majorityEle (vector<int>&nums){
        int num1 = -1, num2 = -1, count1 = 0, count2 = 0;

        for(int i = 0; i<nums.size();i++){
            if(nums[i] == num1){
                count1++;
            }else if(nums[i] == num2){
                count2++;
            }else if(count1 == 0 && nums[i] != num2){
                num1 = nums[i];
                count1 = 1;
            }else if (count2 == 0 && nums[i] != num1) 
            { 
              num2 = nums[i];
              count2 = 1;  
            }else{
                count1--;
                count2--;
            }
            
        }

        vector<int>ans;
        count1 = count2 = 0;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == num1){
                count1++;
            }else if(nums[i] == num2){
                count2++;
            }
        
        }
        if(count1 > nums.size()/3) 
            ans.push_back(num1);
        if(count2 > nums.size()/3) 
            ans.push_back(num2);
        
        return ans;
    }
};

int main(){
    vector<int>nums = {1,2};
    
    Solution s;
    vector<int> result = s.majorityEle(nums);
    for(int result1 : result){
        cout<<result1<<" ";
    }
}