# Snake and ladder

import random
import time

# Variables

player_position = 0
computer_position = 0
snake = [20,36,57,76,98]
ladder = [7,18,43,58,75]
run = True

print("Snake and ladder game by Syed Adeeb")

# Main game
while run:
    player_input = input("Press 'Enter' to roll the dice: ")
    player_dice = random.randint(1,6)
    computer_dice = random.randint(1,6)
    player_position += player_dice
    computer_position += computer_dice
    print(f"\nPlayer got dice {player_dice}\nPlayer Position is {player_position}\n")
    time.sleep(0.5)
    print(f"Computer got dice {computer_dice}\nComputer Position is {computer_position}\n")

    # Check for dice Six
    if player_dice == 6:
        player_reload_dice = random.randint(1,5)
        player_position += player_reload_dice
        print(f"Player got a dice of six. Position incresed by {player_reload_dice} units.")
    elif computer_dice == 6:
        computer_reload_dice = random.randint(1,5)
        computer_position += computer_reload_dice
        print(f"Computer got a dice of six. Position incresed by {computer_reload_dice} units.")

    # Check for Snakes 
    if player_position == snake[0] or player_position == snake[1] or player_position == snake[2] or player_position == snake[3] or player_position == snake[4]:
        snake_position = random.randint(10,15)
        player_position -= snake_position
        print(f"Player got biten by snake. Position decreased by {snake_position} units.")

    elif computer_position == snake[0] or computer_position == snake[1] or computer_position == snake[2] or computer_position == snake[3] or computer_position == snake[4]:
        snake_position = random.randint(10,15)
        computer_position -= snake_position
        print(f"Computer got biten by snake. Position decreased by {snake_position} units.")

    # Check for ladders
    if player_position == ladder[0] or player_position == ladder[1] or player_position == ladder[2] or player_position == ladder[3] or player_position == ladder[4]:
        ladder_position = random.randint(10,15)
        player_position += ladder_position
        print(f"Player got ladder. Position increased by {ladder_position} units.")

    elif computer_position == ladder[0] or computer_position == ladder[1] or computer_position == ladder[2] or computer_position == ladder[3] or computer_position == ladder[4]:
        ladder_position = random.randint(10,15)
        computer_position += ladder_position
        print(f"Computer got ladder. Position increased by {ladder_position} units.")

    # Check for win
    if player_position >= 100:
        print("Player win the match")
        run = False
    elif computer_position >= 100:
        print("Computer win the match")
        run = False
