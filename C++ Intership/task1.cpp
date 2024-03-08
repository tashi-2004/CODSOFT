//Tashfeen Abbasi
//Task 1
//FAST,NUCES,ISLAMABAD
//Tic-Tac Game
#include <iostream>
using namespace std;

void display(char board[][3])
{
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl<<endl;
    }
}

bool win(char board[][3], char player)
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

bool draw(char board[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ') //agr empty 
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char curr = '*';
    bool gameOver = false;
    cout << "\t\t\t__________________" << endl;
    cout << "\t\t\t|   Tic-Tac-Toe  |" << endl;
    cout << "\t\t\t|________________|" << endl;
    cout << endl;
    do
    {
        display(board);
        int r;
        int c;
        cout << "Player " << curr << ", enter your move (row and column): ";
        cin >> r >> c;

        if (board[r - 1][c - 1] == ' ')
        {
            board[r - 1][c - 1] = curr;
        }
        else
        {
            cout << "Cell is already occupied." << endl;
            continue;
        }
        if (win(board, curr))
        {
            display(board);
            cout << "Player " << curr << " wins!" << endl;
            gameOver = true;
        }
        else if (draw(board))
        {
            display(board);
            cout << "The game is a draw!" << endl;
            gameOver = true;
        }

        curr = (curr == '*') ? 'O' : '*';

    } while (!gameOver);
    return 0;
}
