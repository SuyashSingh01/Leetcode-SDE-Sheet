/*
Input: nums = [4,14,2]
Output: 6

Explanation: 
In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010 (just
showing the four bits relevant in this case).
The answer will be:
HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.
*/
#include<iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i = 0; i < 32; i++) {
            int c = 0;
            for(int j = 0; j < n; j++) {
                if((nums[j] & (1 << i))) {
                    c++;
                }
            }
            ans += (c * (n - c));
        }
        return ans;
    }
};

int main() {
    // Example usage
    vector<int> nums = {4, 14, 2};
    Solution s;
    int result = s.totalHammingDistance(nums);
    return 0;
}
