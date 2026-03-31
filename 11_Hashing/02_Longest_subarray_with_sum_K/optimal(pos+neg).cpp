#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        
        unordered_map<long long, int> preSumMap; // prefix sum → first index
        long long sum = 0;
        int maxLen = 0;

        // 🔥 Important trick: handles subarrays starting from index 0
        preSumMap[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];  // build prefix sum

            long long rem = sum - k;

            // check if required prefix exists
            if (preSumMap.find(rem) != preSumMap.end()) {
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }

            // store only first occurrence of prefix sum
            if (preSumMap.find(sum) == preSumMap.end()) {
                preSumMap[sum] = i;
            }
        }

        return maxLen;
    }
};