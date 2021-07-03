#!/usr/bin/python3
"""Module to calculate the perimeter of an island"""


def island_perimeter(grid):
    """
       Function that returns the perimeter of an island
       Args:
            grid (list): list of list of integers with
            the description of the island. 0 water zone,
            1 land zone
    """
    perimeter = 0
    height = len(grid)

    for i in range(height):
        width = len(grid[i])
        for j in range(width):
            if grid[i][j] == 1:
                # In the center of the matrix
                if j - 1 >= 0 and grid[i][j - 1] == 0:
                    perimeter += 1

                if j + 1 < width and grid[i][j + 1] == 0:
                    perimeter += 1

                if i - 1 >= 0 and grid[i - 1][j] == 0:
                    perimeter += 1

                if i + 1 < height and grid[i + 1][j] == 0:
                    perimeter += 1

                # In the borders of matrix
                if i == 0 or j == 0 or i == height - 1 or j == width - 1:
                    # The four corners
                    if i == 0 and j == 0:
                        perimeter += 2

                    elif i == 0 and j == width - 1:
                        perimeter += 2

                    elif i == height - 1 and j == 0:
                        perimeter += 2

                    elif i == height - 1 and j == width - 1:
                        perimeter += 2

                    # The other borders
                    else:
                        perimeter += 1

    return perimeter
