#!/usr/bin/python3
"""
Perimeter module

Contains a function that calculates and island's perimeter
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island

    Input
    -----
        grip: Describes the island and is a list of list of integers:
            - 0 represents a water zone
            - 1 represents a land zone
            - One cell is a square with side length 1
            - Grid cells are connected horizontally/vertically (not diagonally)
            - Grid is rectangular, width and height don’t exceed 100
            - Grid is completely surrounded by water, and there is one island
            (or nothing).
            - The island doesn’t have “lakes” (water inside that isn’t
            connected to the water around the island).

        Return
        ------
            Perimeter of the island
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4

                try:
                    if grid[i - 1][j] == 1:
                        perimeter -= 1
                except IndexError:
                    pass

                try:
                    if grid[i + 1][j] == 1:
                        perimeter -= 1
                except IndexError:
                    pass

                try:
                    if grid[i][j - 1] == 1:
                        perimeter -= 1
                except IndexError:
                    pass

                try:
                    if grid[i][j + 1] == 1:
                        perimeter -= 1
                except IndexError:
                    pass

    return perimeter
