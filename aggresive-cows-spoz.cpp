// this is my code

#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool is_aggresiveCows(vector<int>&stalls, int n, int c, int distance){
    int prev_cow_location = stalls[0];
    int countCow = 1;

    for(int i = 1; i<n; i++){
        if(stalls[i] - prev_cow_location >= distance){
            countCow++;
            prev_cow_location = stalls[i];
        }
    }

    if(countCow == c){
        return true;
    }else{
        return false;
    }

}

ll aggeresiveCows (vector<int>&stalls, int n, int k){
    sort(stalls.begin(), stalls.end());
    
    ll start = 1;
    ll end = stalls[n-1] - stalls[0];
    ll ans = 0;

    while(start<=end){
        ll mid = (start + end)/2;

        if(is_aggresiveCows(stalls, n, k, mid)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return ans;

}

int main(){
    vector<int> stalls = {1,2,8,4,9};
    int n = 5;
    int k = 3;

    cout << aggeresiveCows(stalls, n, k);

    return 0;
}

