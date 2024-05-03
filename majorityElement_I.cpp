#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    
    int majorityEle(vector<int>&nums){
        int num = -1, count = 0;

        for(int i = 0; i<nums.size(); i++){

            if(count == 0){
                num = nums[i];
            }

            if(nums[i] == num){
                count++;
            }else{
                count--;
            }
        }

        return num;
    }
};

int main(){
    vector<int>nums = {3,2,3};
    
    Solution s;
    cout<<s.majorityEle(nums);
}