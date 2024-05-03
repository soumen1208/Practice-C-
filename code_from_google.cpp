// #include <vector>
// #include <algorithm>
// #include<iostream>
// using namespace std;

// bool canPlaceCows(vector<int>& stalls, int n, int cows, int min_dist) {
//   int prev_cow = stalls[0];
//   int cows_placed = 1;
//   for (int i = 1; i < n; i++) {
//     if (stalls[i] - prev_cow >= min_dist) {
//       cows_placed++;
//       prev_cow = stalls[i];
//     }
//   }
//   return cows_placed >= cows;
// }

// int aggressiveCows(vector<int>& stalls, int n, int cows) {
//   sort(stalls.begin(), stalls.end());

//   int low = 1;
//   int high = stalls[n - 1] - stalls[0];
//   int ans = 0;
//   while (low <= high) {
//     int mid = (low + high) / 2;
//     if (canPlaceCows(stalls, n, cows, mid)) {
//       ans = mid;
//       low = mid + 1;
//     } else {
//       high = mid - 1;
//     }
//   }
//   return ans;
// }

// int main() {
//   vector<int> stalls = {1, 2, 8, 4, 9};
//   int n = stalls.size();
//   int cows = 3;

//   cout << aggressiveCows(stalls, n, cows);

//   return 0;
// }

// ============================================================================================================================

// // User function Template for C++
// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:

//     int countCowFitting(vector<int> stalls, int distance){
//         int n = stalls.size();
//         int cnt = 1;
//         int prev = 0;
//         for(int i=1;i<n;i++){
//             while(i<n && stalls[i]-stalls[prev]<distance) i++;
//             if(i==n) break;
//             // cout<<prev<<","<<i<<endl;
//             cnt++;
//             prev = i;

//         }
//         return cnt;
//     }

//     int solve(int n, int k, vector<int> &stalls) {
    
//         // Write your code here
//         int low = 1;
//         sort(stalls.begin(), stalls.end());
//         int high = stalls[n-1]-low;
//         while(low<=high){
//             int mid = (low+high)/2;
//             int cowFit = countCowFitting(stalls, mid);
//             // cout<<mid<<":"<<cowFit<<endl;
//             if(cowFit>=k){
//                 low = mid+1;
//             }else if(cowFit<k){
//                 high = mid-1;
//             }
//         }
//         return high;

//     }
// };

// int main(){
//     vector<int> stalls = {1,2,4,8,9};
//     int n = 5;
//     int k = 3;

//     Solution s;
//     cout<<s.solve(n, k, stalls);   
// }



// #include <bits/stdc++.h>
// using namespace std;

// bool canPlaceCows(int stalls[], int n, int c, int min_dist) {
//   int prev_cow = stalls[0];
//   int count = 1;
//   for (int i = 1; i < n; i++) {
//     if (stalls[i] - prev_cow >= min_dist) {
//       count++;
//       prev_cow = stalls[i];
//     }
//   }
//   return count >= c;
// }

// int aggressiveCows(int stalls[], int n, int c) {
//   sort(stalls, stalls + n);
//   int low = 1;
//   int high = stalls[n - 1] - stalls[0];
//   while (low <= high) {
//     int mid = (low + high) / 2;
//     if (canPlaceCows(stalls, n, c, mid)) {
//       low = mid + 1;
//     } else {
//       high = mid - 1;
//     }
//   }
//   return high;
// }

// int main() {
//   int stalls[] = {1, 2, 4, 8, 9};
//   int n = sizeof(stalls) / sizeof(stalls[0]);
//   int c = 3;
//   cout << aggressiveCows(stalls, n, c) << endl;
//   return 0;
// }

// ==========================================2ND SOLVING=============================================================

