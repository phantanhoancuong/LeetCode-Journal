"""
463. Island Perimeter
You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water.
Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).
The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. 
Determine the perimeter of the island.

Example 1:

Input: grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
Output: 16
Explanation: The perimeter is the 16 yellow stripes in the image above.

Example 2:
Input: grid = [[1]]
Output: 4

Example 3:
Input: grid = [[1,0]]
Output: 4
 
Constraints:
row == grid.length
col == grid[i].length
1 <= row, col <= 100
grid[i][j] is 0 or 1.
There is exactly one island in grid.
"""

lass Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        num_row = len(grid)
        num_col = len(grid[0])

        offsets = ((0, -1), (0, 1), (-1, 0), (1, 0))
        perimeter = 0

        for row in range(num_row):
            for col in range(num_col):

                # Skip water cells
                if grid[row][col] == 0:
                    continue

                for offset_row, offset_col in offsets:
                    neighbor_row = row + offset_row
                    neighbor_col = col + offset_col

                    # If neighbor is out of bounds or water, it contributes to perimeter
                    if not (0 <= neighbor_row < num_row and 0 <= neighbor_col < num_col):
                        perimeter += 1
                    elif grid[neighbor_row][neighbor_col] == 0:
                        perimeter += 1
        return perimeter