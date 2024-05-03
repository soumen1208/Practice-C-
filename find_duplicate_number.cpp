#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int duplicateNos (vector<int> &nums){
        int left = 1;
        int right = nums.size() - 1;

        while (left<right)
        {
            int mid = left + (right - left)/2;
            int count = 0;
            
            for(int num : nums){
                if(num<=mid){
                    count++;
                }
            }
            if(count > mid){
                right = mid;
            }else{
                left = mid +1;
            }
        }

        return left;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    int a;
    for(int i = 0; i<n; i++){
        cin>>a;
        nums.push_back(a);
    }

    // int n;
    // vector<int> nums;
    // while (cin>>n)
    // {
    //     /* code */
    //     nums.push_back(n);
    // }
    
    Solution s;
    int ans = s.duplicateNos(nums);
    cout<<ans;
}