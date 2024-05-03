#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int f(int a,int b, int c, int x){
    return a*x*x+b*x+c;
}

vector<int>sortTransformedArray (vector<int>&nums, int a, int b, int c){
    int n = nums.size();
    int i = 0, j = n-1,  k = a < 0 ? 0 : n-1;
    vector<int>res(n);  
    while (i<=j)
    {
        /* code */
        int v1 = f(a,b,c,nums[i]), v2 = f(a,b,c,nums[j]);
        if(a<0){
            if(v1<=v2){
                res[k] = v1;
                ++i;
            }else{
                res[k] = v2;
                --j;
            }
            ++k;
        }else{
            if(v1>=v2){
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

int main(){
    vector<int>nums = {-4,-2,2,4};
    int a = 1, b = 3, c = 5;

    vector<int>ans = sortTransformedArray(nums, a, b, c);
    cout<<"[";
    for(int ans1 : ans){
        cout<<ans1<<",";
    }
    cout<<"]";

}