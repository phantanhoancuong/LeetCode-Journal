"""
34. Find First and Last Position of Element in Sorted Array
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Example 3:
Input: nums = [], target = 0
Output: [-1,-1]

Constraints:
0 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9
nums is a non-decreasing array.
-10^9 <= target <= 10^9
"""


class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        result = []
        n = len(nums)
        left, right = 0, n - 1

        # First binary search: find the leftmost occurrence
        while left <= right:
            mid = (right + left) // 2
            if nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        # If first search didn't result in the target (target is not in list)
        if left >= n or nums[left] != target:
            return [-1, -1]

        result.append(left)
        right = n - 1

        # Second binary search: find the rightmost occurrence
        while left <= right:
            mid = (right + left) // 2
            if nums[mid] > target:
                right = mid - 1
            else:
                left = mid + 1
        result.append(right)
        return result
