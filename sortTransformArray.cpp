#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// void print_nums (vector<auto>v){
    
// }

class Solution{
    public:

    int f(int a, int b, int c, int x){
        return a*x*x+b*x+c;
    }

    vector<int>sortTransformArray(vector<int>&nums, int a, int b, int c){
        int n = nums.size();
        int i = 0, j = n-1, k = a < 0 ? 0 : n - 1;
        vector<int>res (n);
        while (i <= j)
        {
            int v1 =  f(a,b,c,nums[i]), v2 = f(a,b,c,nums[j]);
            if(a < 0){
                if(v1 <= v2){
                    res[k] = v1;
                    ++i;
                }else{
                    res[k] = v2;
                    --j;
                }
                ++k;
            }else{
                if(v1 >= v2){
                    res[k] = v1;
                    ++i;
                }else{
                    res[k] = v2;
                    --j;
                }
                --k;
            }
        }

        return res;
    }
};

int main(){
    vector<int>nums = {-4, -2, 2, 4};
    int a = 1, b = 3, c = 5;
    Solution s;
    vector<int> result = s.sortTransformArray(nums, a, b, c);
    for(int result1 : result){
        cout<<result1<<" ";
    }
}