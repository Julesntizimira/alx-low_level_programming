#!/usr/bin/python3
""" define island_perimeter() method """
def island_perimeter(grid):
    """ return the perimeter of the island described in grid """
    if len(grid) > 100:
        return
    flag_o = 0
    flag_y = 0
    
    perimeter = 0
    for i in range(len(grid)):
        if len(grid[i]) > 100:
            return
        flag_x = 0
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if flag_o == -1:
                    return
                if flag_o == 1:
                    if low_j <= j + 1 <= high_j:
                        return
                if flag_x == 0:
                    low_j = j + 1
                flag_x += 1
                if i == 0 or j == 0:
                    return
                if i == len(grid) -1 or j == len(grid[1]) -1:
                    return
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
            if j == len(grid[i]) - 1:
                if flag_x == 0:
                    if flag_o != 0:
                        flag_o = -1
                else:
                    flag_o = 1
                high_j = flag_x

    return perimeter
