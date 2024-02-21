#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for rw in range(rows):
        for cl in range(cols):
            if grid[rw][cl] == 1:
                if rw == 0 or grid[rw - 1][cl] == 0:
                    perimeter += 1
                if cl == cols - 1 or grid[rw][cl + 1] == 0:
                    perimeter += 1
                if rw == rows - 1 or grid[rw + 1][cl] == 0:
                    perimeter += 1
                if cl == 0 or grid[rw][cl - 1] == 0:
                    perimeter += 1

    return perimeter
