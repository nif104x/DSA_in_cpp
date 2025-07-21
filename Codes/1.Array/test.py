import numpy as np

def play_game(arena):
    row, col = arena.shape
    point = 0
    for i in range(row):
        for j in range(col):
            if arena[i][j] % 50 == 0:
                # Check adjacent cells and add points
                if i > 0 and arena[i - 1][j] == 2:
                    point += 2
                if i < row - 1 and arena[i + 1][j] == 2:
                    point += 2
                if j > 0 and arena[i][j - 1] == 2:
                    point += 2
                if j < col - 1 and arena[i][j + 1] == 2:
                    point += 2
    if point >= 10:
        print(f"Points Gained: {point}. Your team has survived the game.")
    else:
        print(f"Points Gained: {point}. Your team is out.")

def print_matrix(matrix):
    for row in matrix:
        print(row)

#DO NOT CHANGE THE CODE BELOW
arena = np.array([[0, 2, 2, 0],
                  [50, 1, 2, 0],
                  [2, 2, 2, 0],
                  [1, 100, 2, 0]])
print_matrix(arena)
play_game(arena)
#This should print
#Points Gained: 6. Your team is out.
print(".....................")
arena = np.array([[0, 2, 2, 0, 2],
                  [1, 50, 2, 1, 100],
                  [2, 2, 2, 0, 2],
                  [0, 200, 2, 0, 0]])
print_matrix(arena)
play_game(arena)
#This should print
#Points Gained: 14. Your team has survived the game.