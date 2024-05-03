// // // // #include <vector>
// // // // #include <algorithm>
// // // // #include<iostream>
// // // // using namespace std;

// // // // bool canPlaceCows(vector<int>& stalls, int n, int cows, int min_dist) {
// // // //   int prev_cow = stalls[0];
// // // //   int cows_placed = 1;
// // // //   for (int i = 1; i < n; i++) {
// // // //     if (stalls[i] - prev_cow >= min_dist) {
// // // //       cows_placed++;
// // // //       prev_cow = stalls[i];
// // // //     }
// // // //   }
// // // //   return cows_placed >= cows;
// // // // }

// // // // int aggressiveCows(vector<int>& stalls, int n, int cows) {
// // // //   sort(stalls.begin(), stalls.end());

// // // //   int low = 1;
// // // //   int high = stalls[n - 1] - stalls[0];
// // // //   int ans = 0;
// // // //   while (low <= high) {
// // // //     int mid = (low + high) / 2;
// // // //     if (canPlaceCows(stalls, n, cows, mid)) {
// // // //       ans = mid;
// // // //       low = mid + 1;
// // // //     } else {
// // // //       high = mid - 1;
// // // //     }
// // // //   }
// // // //   return ans;
// // // // }

// // // // int main() {
// // // //   vector<int> stalls = {1, 2, 8, 4, 9};
// // // //   int n = stalls.size();
// // // //   int cows = 3;

// // // //   cout << aggressiveCows(stalls, n, cows);

// // // //   return 0;
// // // // }


// // // #include <vector>
// // // #include <iostream>

// // // std::vector<int> majorityElement(std::vector<int>& nums) {
// // //     int candidate1 = 0, candidate2 = 0, count1 = 0, count2 = 0;

// // //     // Find the candidates
// // //     for (int num : nums) {
// // //         if (num == candidate1)
// // //             count1++;
// // //         else if (num == candidate2)
// // //             count2++;
// // //         else if (count1 == 0) {
// // //             candidate1 = num;
// // //             count1 = 1;
// // //         } else if (count2 == 0) {
// // //             candidate2 = num;
// // //             count2 = 1;
// // //         } else {
// // //             count1--;
// // //             count2--;
// // //         }
// // //     }

// // //     // Count the occurrences of candidates
// // //     count1 = 0;
// // //     count2 = 0;
// // //     for (int num : nums) {
// // //         if (num == candidate1)
// // //             count1++;
// // //         else if (num == candidate2)
// // //             count2++;
// // //     }

// // //     // Check if candidates occur more than n/3 times
// // //     std::vector<int> result;
// // //     if (count1 > nums.size() / 3)
// // //         result.push_back(candidate1);
// // //     if (count2 > nums.size() / 3)
// // //         result.push_back(candidate2);

// // //     return result;
// // // }

// // // int main() {
// // //     std::vector<int> nums1 = {3, 2, 3};
// // //     std::vector<int> result1 = majorityElement(nums1);
// // //     std::cout << "Example 1 Output: ";
// // //     for (int num : result1)
// // //         std::cout << num << " ";
// // //     std::cout << std::endl;

// // //     std::vector<int> nums2 = {1};
// // //     std::vector<int> result2 = majorityElement(nums2);
// // //     std::cout << "Example 2 Output: ";
// // //     for (int num : result2)
// // //         std::cout << num << " ";
// // //     std::cout << std::endl;

// // //     std::vector<int> nums3 = {1, 2};
// // //     std::vector<int> result3 = majorityElement(nums3);
// // //     std::cout << "Example 3 Output: ";
// // //     for (int num : result3)
// // //         std::cout << num << " ";
// // //     std::cout << std::endl;

// // //     return 0;
// // // }




// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// // using namespace std;

// // int main() {
// //   int n, m;
// //   cin >> n >> m;

// //   vector<int> temperatures(n);
// //   for (int i = 0; i < n; i++) {
// //     cin >> temperatures[i];
// //   }

// //   vector<int> prefix_minimums(n);
// //   prefix_minimums[0] = temperatures[0];
// //   for (int i = 1; i < n; i++) {
// //     prefix_minimums[i] = min(prefix_minimums[i - 1], temperatures[i]);
// //   }

// //   vector<int> suffix_maximums(n);
// //   suffix_maximums[n - 1] = temperatures[n - 1];
// //   for (int i = n - 2; i >= 0; i--) {
// //     suffix_maximums[i] = max(suffix_maximums[i + 1], temperatures[i]);
// //   }

// //   int answer = 0;
// //   for (int i = 0; i < n; i++) {
// //     if (prefix_minimums[i] <= m && suffix_maximums[i] >= m) {
// //       answer++;
// //     }
// //   }

// //   cout << answer << endl;

// //   return 0;
// // }





// #include <bits/stdc++.h>
// using namespace std;
// double fx(double b,double c , double x){
//     double ans;
//     ans = x*x + b*x + c;
//     ans = ans / sin(x);
//     return ans;
// }
// int main() {
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 	    double b,c;
// 	    cin>>b>>c;
// 	    double l = 0.000001;
// 	    double pie = 3.1415926;
// 	    double r = pie/2;
// 	    while(r-l>0.0000001){
// 	        double m1 = l + (r-l)/3;
// 	        double m2 = r-(r-l)/3;
// 	        if(fx(b,c,m1)>fx(b,c,m2)){
// 	            l = m1;
// 	        }else if(fx(b,c,m1)<fx(b,c,m2)){
// 	            r = m2;
// 	        }else{
// 	            l = m1;
// 	            r = m2;
// 	        }
	        
// 	    }
// 	    cout<<fixed<<setprecision(7)<<fx(b,c,r)<<endl;
// 	}

// }



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int n, int m, int k, vector<int>& fridge_expirations, vector<int>& shop_expirations, int x) {
    vector<int> remaining_fridge = fridge_expirations;
    sort(remaining_fridge.begin(), remaining_fridge.end());
    
    int fridge_index = 0;
    for (int i = 0; i < x; ++i) {
        bool found = false;
        while (fridge_index < n && remaining_fridge[fridge_index] <= i) {
            ++fridge_index;
        }
        
        if (fridge_index < n && remaining_fridge[fridge_index] > i && k > 0) {
            --k;
            found = true;
        }
        
        while (!found && !shop_expirations.empty() && shop_expirations.back() <= i) {
            shop_expirations.pop_back();
        }
        
        if (!found && !shop_expirations.empty()) {
            shop_expirations.pop_back();
            found = true;
        }
        
        if (!found) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> fridge_expirations(n);
    for (int i = 0; i < n; ++i) {
        cin >> fridge_expirations[i];
    }
    
    vector<int> shop_expirations(m);
    for (int i = 0; i < m; ++i) {
        cin >> shop_expirations[i];
    }
    
    int l = 0, r = n + m;
    int ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(n, m, k, fridge_expirations, shop_expirations, mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    
    cout << ans << endl;
    if (ans != -1) {
        int fridge_index = 0;
        for (int i = 0; i < ans; ++i) {
            bool found = false;
            while (fridge_index < n && fridge_expirations[fridge_index] <= i) {
                ++fridge_index;
            }
            
            if (fridge_index < n && fridge_expirations[fridge_index] > i && k > 0) {
                --k;
                found = true;
            }
            
            while (!found && !shop_expirations.empty() && shop_expirations.back() <= i) {
                shop_expirations.pop_back();
            }
            
            if (!found && !shop_expirations.empty()) {
                cout << m - shop_expirations.size() + 1 << " ";
                shop_expirations.pop_back();
                found = true;
            }
        }
    }
    
    return 0;
}
