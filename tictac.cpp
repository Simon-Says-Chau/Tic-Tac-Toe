#include <iostream>
#include <cstring>

using namespace std;

class tictacBoard {
    char board[5][5];

    public:
        bool player;
        bool endGame;
        void initBoard();
        void updateBoardPlayer(string, bool);
        void displayBoard();
        void checkComplete();

};

void tictacBoard::initBoard() {
    cout << "Welcome to Tic-Tac-Toe" << endl;
    int count = 1;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            // Generate the space
            if(j%2 == 0 && i%2 == 0) {
                if(count == 1) {
                    board[i][j] = '1';
                }
                
                if(count == 2) {
                    board[i][j] = '2';
                }

                if(count == 3) {
                    board[i][j] = '3';
                }

                if(count == 4) {
                    board[i][j] = '4';
                }

                if(count == 5) {
                    board[i][j] = '5';
                }

                if(count == 6) {
                    board[i][j] = '6';
                }

                if(count == 7) {
                    board[i][j] = '7';
                }

                if(count == 8) {
                    board[i][j] = '8';
                }

                if(count == 9) {
                    board[i][j] = '9';
                }
                
                count++;
            }

            else if(i%2 == 1) {
                board[i][j] = '-';
            }

            // Generate the columns
            else {
                board[i][j] = '|';
            }

            cout << board[i][j];
        }
        cout << endl;
    }
}

void tictacBoard::displayBoard(){
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

void tictacBoard::checkComplete(){
    if((board[0][0] == 'X' && board[0][2] == 'X' && board[0][4] == 'X') ||
    (board[2][0] == 'X' && board[2][2] == 'X' && board[2][4] == 'X') ||
    (board[4][0] == 'X' && board[4][2] == 'X' && board[4][4] == 'X') ||
    (board[0][0] == 'X' && board[2][0] == 'X' && board[4][0] == 'X') ||
    (board[0][2] == 'X' && board[2][2] == 'X' && board[4][2] == 'X') ||
    (board[0][4] == 'X' && board[2][4] == 'X' && board[4][4] == 'X') ||
    (board[0][0] == 'X' && board[2][2] == 'X' && board[4][4] == 'X') ||
    (board[4][0] == 'X' && board[2][2] == 'X' && board[0][4] == 'X')) {
        cout << "Actually... Player 1 Wins!" << endl;
        endGame = 1;
    }

    if((board[0][0] == 'O' && board[0][2] == 'O' && board[0][4] == 'O') ||
    (board[2][0] == 'O' && board[2][2] == 'O' && board[2][4] == 'O') ||
    (board[4][0] == 'O' && board[4][2] == 'O' && board[4][4] == 'O') ||
    (board[0][0] == 'O' && board[2][0] == 'O' && board[4][0] == 'O') ||
    (board[0][2] == 'O' && board[2][2] == 'O' && board[4][2] == 'O') ||
    (board[0][4] == 'O' && board[2][4] == 'O' && board[4][4] == 'O') ||
    (board[0][0] == 'O' && board[2][2] == 'O' && board[4][4] == 'O') ||
    (board[4][0] == 'O' && board[2][2] == 'O' && board[0][4] == 'O')) {
        cout << "Actually... Player 2 Wins!" << endl;
        endGame = 1;
    }
}

void tictacBoard::updateBoardPlayer(string x, bool y){
    cout << "====================================" << endl;
    if(x == "1" && board[0][0] == '1') {
        if(y == 0){
            board[0][0] = 'X';
            player = 1;
            cout << "It is Player: 2's Turn." << endl;
        }

        else if(y == 1){
            board[0][0] = 'O';
            player = 0;
            cout << "It is Player: 1's Turn." << endl;
        }
    }

    else if(x == "2" && board[0][2] == '2') {
        if(y == 0) {
            board[0][2] = 'X';
            player = 1;
            cout << "It is Player: 2's Turn." << endl;
        }

        else if(y == 1) {
            board[0][2] = 'O';
            player = 0;
            cout << "It is Player: 1's Turn." << endl;
        }
    }

    else if(x == "3" && board[0][4] == '3') {
        if(y == 0) {
            board[0][4] = 'X';
            player = 1;
            cout << "It is Player: 2's Turn." << endl;
        }

        else if(y == 1) {
            board[0][4] = 'O';
            player = 0;
            cout << "It is Player: 1's Turn." << endl;
        }
    }

    else if(x == "4" && board[2][0] == '4') {
        if(y == 0) {
            board[2][0] = 'X';
            player = 1;
            cout << "It is Player: 2's Turn." << endl;
        }

        else if(y == 1) {
            board[2][0] = 'O';
            player = 0;
            cout << "It is Player: 1's Turn." << endl;
        }
    }

    else if(x == "5" && board[2][2] == '5') {
        if(y == 0) {
            board[2][2] = 'X';
            player = 1;
            cout << "It is Player: 2's Turn." << endl;
        }

        else if(y == 1) {
            board[2][2] = 'O';
            player = 0;
            cout << "It is Player: 1's Turn." << endl;
        }
    }

    else if(x == "6" && board[2][4] == '6') {
        if(y == 0) {
            board[2][4] = 'X';
            player = 1;
            cout << "It is Player: 2's Turn." << endl;
        }

        else if(y == 1) {
            board[2][4] = 'O';
            player = 0;
            cout << "It is Player: 1's Turn." << endl;
        }
    }

    else if(x == "7" && board[4][0] == '7') {
        if(y == 0) {
            board[4][0] = 'X';
            player = 1;
            cout << "It is Player: 2's Turn." << endl;
        }

        else if(y == 1) {
            board[4][0] = 'O';
            player = 0;
            cout << "It is Player: 1's Turn." << endl;
        }
    }

    else if(x == "8" && board[4][2] == '8') {
        if(y == 0) {
            board[4][2] = 'X';
            player = 1;
            cout << "It is Player: 2's Turn." << endl;
        }

        else if(y == 1) {
            board[4][2] = 'O';
            player = 0;
            cout << "It is Player: 1's Turn." << endl;
        }
    }

    else if(x == "9" && board[4][4] == '9') {
        if(y == 0) {
            board[4][4] = 'X';
            player = 1;
            cout << "It is Player: 2's Turn." << endl;
        }

        else if(y == 1) {
            board[4][4] = 'O';
            player = 0;
            cout << "It is Player: 1's Turn." << endl;
        }
    }

    else {
        cout << "Invalid Spot or Already taken." << endl;
    }

    displayBoard();
}

int main() {
    tictacBoard t_board;
    t_board.initBoard();
    string userResp;
    t_board.player = 0;
    t_board.endGame = 0;

    while(1) {
        if(t_board.endGame == 1) {
            break;
        }

        cin >> userResp;
        if(t_board.player == 0) {
            if(userResp == "1" || userResp == "2" || userResp == "3" ||
            userResp == "4" || userResp == "5" || userResp == "6" ||
            userResp == "7" || userResp == "8" || userResp == "9") {
                t_board.updateBoardPlayer(userResp, t_board.player);
                t_board.checkComplete();
            }

            else {
                cout << "Not a valid response." << endl;
            }
        }

        else if(t_board.player == 1) {
            if(userResp == "1" || userResp == "2" || userResp == "3" ||
            userResp == "4" || userResp == "5" || userResp == "6" ||
            userResp == "7" || userResp == "8" || userResp == "9") {
                t_board.updateBoardPlayer(userResp, t_board.player);
                t_board.checkComplete();
            }

            else {
                cout << "Not a valid response." << endl;
            }
        }
    }
    return 0;
}