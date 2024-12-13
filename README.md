# Tic-Tac-Toe Game (C++)

A simple **Tic-Tac-Toe** game implemented in C++ that allows two players to play on a 3x3 board. Players alternate between 'X' and 'O' to mark the spots on the board. The game detects a winner or a draw after each turn.

## Features

- Two-player gameplay (Player 1 uses 'X' and Player 2 uses 'O').
- Clear board display after each turn.
- Input validation to prevent choosing already marked spots.
- Detects winner or draw at the end of the game.

## How to Play

1. The game will display the current game board.
2. Players take turns to enter a number between 1-9, representing a position on the board.
   - Position 1-3 corresponds to the first row.
   - Position 4-6 corresponds to the second row.
   - Position 7-9 corresponds to the third row.
3. The game checks after every move if a player has won or if the game is a draw.
4. The game ends once a player wins or all spots on the board are filled.

## Installation

1.Clone this repository or download the project files.
   
   ```bash
   git clone https://github.com/yourusername/tic-tac-toe-cpp.git

2.Open the tic-tac-toe.cpp file in any C++ IDE or text editor.

3.Compile the code using a C++ compiler. For example, using g++:
g++ tic-tac-toe.cpp -o tic-tac-toe

4. Run the executable:
./tic-tac-toe
