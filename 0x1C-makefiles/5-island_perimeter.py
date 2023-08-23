#!/usr/bin/python3
""" define island_perimeter() method """
def island_perimeter(grid):
    """ return the perimeter of the island described in grid """
    if len(grid) > 100:
        return  
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                sum = 4
                if grid[i][j - 1] == 1:
                    sum -= 1
                if grid[i][j + 1] == 1:
                    sum -= 1
                if grid[i - 1][j] == 1:
                    sum -= 1
                if grid[i + 1][j] == 1:
                    sum -= 1
                perimeter += sum
    return perimeter
