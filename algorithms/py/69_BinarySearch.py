"""
69. Sqrt(x)
Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.
For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

Example 1:
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

Example 2:
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

Constraints:
0 <= x <= 2^31 - 1
"""


class Solution:
    def mySqrt(self, x: int) -> int:
        lower = 0
        upper = x
        mid = 0
        while lower <= upper:
            mid = (upper + lower) // 2
            squared = mid * mid
            if squared == x:
                return mid

            if squared < x:
                lower = mid + 1
            else:
                upper = mid - 1

        return upper
