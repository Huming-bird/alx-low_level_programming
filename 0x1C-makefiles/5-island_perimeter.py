#!/usr/bin/python3
"""Module contains 'island_perimeter' function"""


def island_perimeter(grid):
    """
        Returns the perimeter of a grid
    """
    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if j == 0:
                        perim += 1
                    else:
                        if grid[i][j-1] == 0:
                            perim += 1
                except IndexError:
                    pass
                try:
                    if j == len(grid[i]) - 1:
                        perim += 1
                    else:
                        if grid[i][j+1] == 0:
                            perim += 1
                except IndexError:
                    pass
                try:
                    if i == 0:
                        perim += 1
                    else:
                        if grid[i-1][j] == 0:
                            perim += 1
                except IndexError:
                    pass
                try:
                    if i == len(grid) - 1:
                        perim += 1
                    else:
                        if grid[i+1][j] == 0:
                            perim += 1
                except IndexError:
                    pass
    return perim
