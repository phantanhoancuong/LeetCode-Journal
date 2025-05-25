"""
912. Sort an Array
Given an array of integers nums, sort the array in ascending order and return it.
You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

Example 1:
Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).

Example 2:
Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
Explanation: Note that the values of nums are not necessairly unique.

Constraints:
1 <= nums.length <= 5 * 10^4
-5 * 10^4 <= nums[i] <= 5 * 10^4
"""


class Solution:
    def max_heapify(self, nums, i, n):
        largest = i
        left = i * 2 + 1
        right = i * 2 + 2
        if left < n and nums[left] > nums[largest]:
            largest = left

        if right < n and nums[right] > nums[largest]:
            largest = right

        if largest != i:
            nums[largest], nums[i] = nums[i], nums[largest]
            self.max_heapify(nums, largest, n)

    def sortArray(self, nums: List[int]) -> List[int]:
        n = len(nums)
        for i in range(n // 2 - 1, -1, -1):
            self.max_heapify(nums, i, n)

        for i in range(n - 1, 0, -1):
            nums[0], nums[i] = nums[i], nums[0]
            self.max_heapify(nums, 0, i)

        return nums
