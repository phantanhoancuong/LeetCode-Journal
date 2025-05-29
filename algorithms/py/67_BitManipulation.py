"""
67. Add Binary
Given two binary strings a and b, return their sum as a binary string.

Example 1:
Input: a = "11", b = "1"
Output: "100"

Example 2:
Input: a = "1010", b = "1011"
Output: "10101"

Constraints:
1 <= a.length, b.length <= 10^4
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
"""


class Solution:
    def addBinary(self, a: str, b: str) -> str:
        carry = "0"
        n_a = len(a)
        n_b = len(b)
        result = []
        i = 0
        while i < n_a or i < n_b:
            val_a = a[n_a - i - 1] if i < n_a else "0"
            val_b = b[n_b - i - 1] if i < n_b else "0"

            one_count = 0
            if val_a == "1":
                one_count += 1
            if val_b == "1":
                one_count += 1
            if carry == "1":
                one_count += 1

            if one_count == 0:
                next_digit = "0"
                carry = "0"
            elif one_count == 1:
                next_digit = "1"
                carry = "0"
            elif one_count == 2:
                next_digit = "0"
                carry = "1"
            else:
                next_digit = "1"
                carry = "1"

            result.append(next_digit)
            i += 1

        if carry == "1":
            result.append("1")

        return "".join(reversed(result))
