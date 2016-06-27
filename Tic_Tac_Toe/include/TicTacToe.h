#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <iostream>
#include <string>
#include <cstdio>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class TicTacToe
{
    public:
        TicTacToe();

        int playGame();
        void playerName();

    protected:

    private:
           //print the board
        char board[3][3];
        void printBoard();
        void clearBoard();
        int checkWinner(string player1,string player2);
};

#endif // TICTACTOE_H
