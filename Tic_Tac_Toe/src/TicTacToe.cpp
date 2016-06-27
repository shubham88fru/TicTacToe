#include "TicTacToe.h"

TicTacToe::TicTacToe()
{

}

void TicTacToe::clearBoard()
{
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    board[i][j]=' ';
                }
            }
            printBoard();
}
void TicTacToe::playerName()
{
    //printBoard();


}
void TicTacToe::printBoard()
{
    system("cls");
    cout<<"      ************* ~Welcome To Your TicTacToe Game~ **************\n\n";
    cout<<" | 1  2  3|\n";
    for(int i=0;i<3;i++){
            cout<<" ----------\n";
            cout<<i+1;
        for(int j=0;j<3;j++){
            cout<<"| "<<board[i][j];
        }
        cout<<"|";
        cout<<endl;
    }
}

int TicTacToe::playGame()
{
    clearBoard();

    string player1;
    string player2;

    cout<<"\nPlayer 1, Please Enter Your name: ";
    cin>>player1;

    cout<<"Player 2, Please Enter Your name: ";
    cin>>player2;

    int xCoord,yCoord;
    int playerNum;
    int movesCount=9;
    bool movesOver=false;

    cout<<"\nwho would like to make the first move: (1= "<<player1<<",2= "<<player2<<" )"<<" :";
    cin>>playerNum;

    while(movesOver==false){
        while(movesCount--){
                        if(playerNum==1){

                    cout<<player1<<" Enter the X coordinate: ";
                    cin>>xCoord;
                    cout<<player1<<" Enter the Y coordinate: ";
                    cin>>yCoord;
                    playerNum=2;
                    board[xCoord-1][yCoord-1]='X';
                    printBoard();

            }else{
                    cout<<player2<<" Enter the X coordinate: ";
                    cin>>xCoord;
                    cout<<player2<<" Enter the Y coordinate: ";
                    cin>>yCoord;
                    playerNum=1;
                    board[xCoord-1][yCoord-1]='0';
                    printBoard();

            }
            if(movesCount<4){
                if(!checkWinner(player1,player2)){
                    return 0;
                }

            }
        }
        movesOver=true;
    }
    cout<<"\nGAME OVER!Match is a Tie";

}

int TicTacToe::checkWinner(string player1,string player2)
{
    for(int i=0;i<3;i++){
            if( ((board[i][0]!=' ')&&(board[i][0]==board[i][1])&&(board[i][1]==board[i][2]))){
                if(board[i][0]=='X'){
                    cout<<"\nGAME OVER, "<<player1<<" Won the Game!!";
                    return 0;
                }else
                    {
                        cout<<"\nGAME OVER, "<<player2<<" Won the Game!!";
                        return 0;
                    }
            }else if(((board[0][i]!=' ')&&(board[0][i]==board[1][i])&&(board[1][i]==board[2][i]))){
                   if(board[i][0]=='X'){
                    cout<<"\nGAME OVER, "<<player1<<" Won the Game!!";
                    return 0;
                }else
                    {
                        cout<<"\nGAME OVER, "<<player2<<" Won the Game!!";
                        return 0;
                    }
            }else if(((board[0][0]!=' ')&&(board[0][0]==board[1][1])&&(board[1][i]==board[2][2]))){
                       if(board[i][0]=='X'){
                    cout<<"\nGAME OVER, "<<player1<<" Won the Game!!";
                    return 0;
                }else
                    {
                        cout<<"\nGAME OVER, "<<player2<<" Won the Game!!";
                        return 0;
                    }
            }

    }
    return 1;
}
