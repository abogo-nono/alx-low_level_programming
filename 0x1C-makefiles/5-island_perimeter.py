#!/usr/bin/python3
"""perimeter of the island described."""

def island_perimeter(grid):
    """A script that returns the perimeter of the island described in grid

    Args:
        grid (list): the grid

    Returns:
        int: The perimeter of the island in grid.
    """
    w = len(grid[0])
    h = len(grid)
    e = 0
    s = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s += 4
                if j > 0 and grid[i][j - 1] == 1:
                    e += 1
                if i > 0 and grid[i - 1][j] == 1:
                    e += 1

    return s - 2 * e
