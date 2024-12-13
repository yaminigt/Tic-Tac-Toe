#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'},
                    {'4', '5', '6'},
                    {'7', '8', '9'}};

int choice;
int row, col;
char turn = 'X';
bool draw = false;

void displayBoard() {
    cout << "\n\nTic-Tac-Toe Game\n";
    cout << "Player 1 [X] - Player 2 [O]\n\n";
    cout << "     |     |     \n";
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << " \n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |     \n";
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << " \n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |     \n";
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << " \n";
    cout << "     |     |     \n";
}

void playerTurn() {
    if (turn == 'X') {
        cout << "\nPlayer 1 [X], enter the position (1-9): ";
    } else {
        cout << "\nPlayer 2 [O], enter the position (1-9): ";
    }

    cin >> choice;

    switch (choice) {
        case 1: row = 0; col = 0; break;
        case 2: row = 0; col = 1; break;
        case 3: row = 0; col = 2; break;
        case 4: row = 1; col = 0; break;
        case 5: row = 1; col = 1; break;
        case 6: row = 1; col = 2; break;
        case 7: row = 2; col = 0; break;
        case 8: row = 2; col = 1; break;
        case 9: row = 2; col = 2; break;
        default:
            cout << "Invalid input. Try again.\n";
            playerTurn();
            return;
    }

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = turn;
    } else {
        cout << "Sorry, this position is already marked with an " << board[row][col] << ". Try again.\n";
        playerTurn();
    }
}

bool gameOver() {
    // Check for winning condition
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return false;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return false;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return false;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return false;
    }

    // Check for draw
    bool empty = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                empty = true;
                break;
            }
        }
    }
    if (!empty) {
        draw = true;
        return false;
    }
    return true;
}

int main() {
    while (true) {
        displayBoard();
        playerTurn();
        if (!gameOver()) {
            break;
        }
        turn = (turn == 'X') ? 'O' : 'X';
    }

    displayBoard();
    if (turn == 'X' && !draw) {
        cout << "\nPlayer 1 [X] wins!" << endl;
    } else if (turn == 'O' && !draw) {
        cout << "\nPlayer 2 [O] wins!" << endl;
    } else {
        cout << "\nIt's a draw!" << endl;
    }

    return 0;
}