#!/usr/bin/python3
""" define an island perimeter """


def island_perimeter(grid):
    """return the perimeter of island

    Args:
        grid: a list of list of integers representing an island.
    return:
        the result.
    """
    w = len(grid[0])
    h = len(grid)

    ed = 0
    size = 0

    for x in range(h):
        for a in range(w):
            if grid[x][a] == 1:
                size += 1

                if (a > 0 and grid[x][a - 1] == 1):
                    ed += 1

                if (x > 0 and grid[x - 1][a] == 1):
                    ed += 1

    return size * 4 - ed * 2
