#!/usr/bin/python3
""" Island perimeter module"""

def island_perimeter(grid):
    """"
    A function that returns the parameter of the island decribed in grid

    Args:
        grid(List[List[int]]): A list of lists representing the island.
    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                if row == 0 or grid[row -1][column] == 0:
                    perimeter +=1
                if row == len(grid) - 1 or grid[row + 1][column] ==0:
                    perimeter +=1
                if column == 0 or grid[row][column - 1] == 0:
                    perimeter += 1
                if column == len(grid[row]) - 1 or grid[row][column + 1] == 0:
                    perimeter += 1
    return perimeter

