#include <iostream>
using namespace std;
void printBoard(char board[3][3]);
bool isWinner(char board[3][3], char player);
bool isBoardFull(char board[3][3]);
void playGame();
bool playAgain();

int main() 
{
    char choice;
    do 
    {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}

void printBoard(char board[3][3]) 
{
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " \n";
    cout << "___|___|___\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " \n";
    cout << "___|___|___\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " \n";
}

bool isWinner(char board[3][3], char player) 
{
    for (int i = 0; i < 3; i++) 
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || (board[0][i] == player && board[1][i] == player && board[2][i] == player)) 
        {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || (board[0][2] == player && board[1][1] == player && board[2][0] == player)) 
    {
        return true;
    }
    return false;
}

bool isBoardFull(char board[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (board[i][j] == ' ') 
            {

                return false;
            }
        }
    }
    return true;
}

void playGame() 
{
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char currentPlayer = 'X';
    int row, col;
    bool gameWon = false;
    while (!gameWon && !isBoardFull(board)) 
    {
        printBoard(board);
        cout << "Player " << currentPlayer << ", enter row (0, 1, or 2) and column (0, 1, or 2): ";
        cin >> row >> col;
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') 
        {
            cout << "Invalid move. Try again.\n";
            continue;
        }
        board[row][col] = currentPlayer;
        gameWon = isWinner(board, currentPlayer);
        if (!gameWon && !isBoardFull(board)) 
        {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }
    printBoard(board);
    if (gameWon) 
    {
        cout << "Player " << currentPlayer << " wins!\n";
    } 
    else 
    {
        cout << "It's a draw!\n";
    }
}

bool playAgain() 
{
    char response;
    cout << "Do you want to play again? (y/n): ";
    cin >> response;
    return (response == 'y' || response == 'Y');
}
