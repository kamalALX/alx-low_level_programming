#!/usr/bin/python3
""" this module contains method island_perimeter """


def island_perimeter(grid):
    """
        this method eturns the perimeter of the island described in grid
    """
    rows = len(grid)
    columns = len(grid[0])
    p = 0
    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    p += 1
                if j == columns - 1 or grid[i][j + 1] == 0:
                    p += 1
                if j == 0 or grid[i][j - 1] == 0:
                    p += 1
                if i == rows - 1 or grid[i + 1][j] == 0:
                    p += 1
    return p
