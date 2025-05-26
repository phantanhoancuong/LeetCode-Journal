"""
200. Number of Islands
Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically.
You may assume all four edges of the grid are all surrounded by water.

Example 1:
Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1

Example 2:
Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3

Constraints:
m == grid.length
n == grid[i].length
1 <= m, n <= 300
grid[i][j] is '0' or '1'.
"""


class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        row_num = len(grid)
        col_num = len(grid[0])
        island_count = 0

        # right, left, down, up
        offsets = [(0, 1), (0, -1), (1, 0), (-1, 0)]

        for row in range(row_num):
            for col in range(col_num):
                # Skip water cells and already visited land cells
                if grid[row][col] == "0":
                    continue

                # New island found; increment counter
                island_count += 1
                stack = [(row, col)]

                # DFS to visit all connected land cells
                while stack:
                    current_row, current_col = stack.pop()
                    grid[current_row][current_col] = "0"

                    for row_offset, col_offset in offsets:
                        next_row = current_row + row_offset
                        next_col = current_col + col_offset

                        if not (0 <= next_row < row_num and 0 <= next_col < col_num):
                            continue

                        if grid[next_row][next_col] == "1":
                            stack.append((next_row, next_col))

        return island_count
