/* 16. 3Sum Closest
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
Return the sum of the three integers.
You may assume that each input would have exactly one solution.

Example 1:
Input: nums = [-1, 2, 1, -4], target = 1
Output : 2
Explanation : The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

Example 2 :
Input : nums = [0, 0, 0], target = 1
Output : 0
Explanation : The sum that is closest to the target is 0. (0 + 0 + 0 = 0).

Constraints :
3 <= nums.length <= 500
- 1000 <= nums[i] <= 1000
- 10^4 <= target <= 10^4 */

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // If there are only 3 elements, return their sum
        int closestSum = nums[0] + nums[1] + nums[2];
        if (nums.size() == 3) {
            return closestSum;
        }

        // Sort the vector
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int currentSum = nums[i] + nums[j] + nums[k];

                // Early return
                if (currentSum == target) {
                    return currentSum;
                }

                // Update closestSum and move the pointers
                if (abs(target - currentSum) < abs(target - closestSum)) {
                    closestSum = currentSum;
                }
                if (currentSum < target) {
                    j++;
                }
                else if (currentSum > target) {
                    k--;
                }
            }
        }
        return closestSum;
    }
};