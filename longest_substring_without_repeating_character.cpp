#include "bits/stdc++.h"
using namespace std;

// int main(){
//     string s;
//     cin>>s;

//     int maxLength = 0;
//     unordered_map<char, int> map;
//     int start = 0;

//     for(int i = 0; i<s.size(); i++){
//         if(map.find(s[i]) != map.end());{
//         start = max(start, map[s[i]] + 1);
//         }
//         map[s[i]] = i;
//         maxLength = max(maxLength, i - start+1);
//     }

//     return maxLength;

// }

class Solution{
    public:
    int lengthOfLongestSubstring(string s){
        int maxLength = 0;
        unordered_map<char, int>map;
        int start = 0;
        for(int i = 0; i<s.size(); i++){
            if(map.find(s[i]) != map.end()){
                start = max(start, map[s[i]]+1);
            }
            map[s[i]] = i;
            maxLength = max(maxLength, i - start +1);
        }
    
        return maxLength;
    }
};

int main(){
    string s = "bbbb";

    Solution ans;
    cout << ans.lengthOfLongestSubstring(s);

    return 0;
}

// ===============================================================APNA COLLEGE

// int32_t main(){
//     string s = "abcabcbb";
//     vector<int> dict(256, -1);
//     int maxLenth = 0, start = -1;

//     for(int i = 0; i<s.size();  i++){
//         if(dict[s[i]] > start){
//             start = dict[s[i]];    // strat is change to old position;
//             dict[s[i]] = i; // pos is now stay in current position;
//             maxLenth = max(maxLenth, i-start);
//         }

//         cout<<maxLenth;
//     }
// }