#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include <iostream>
#include <string>
#include <memory>

using std::cout; using std::cin; using std::string;

int main()
{
    std::unique_ptr<TicTacToe> game;
    string first_player;
    char board_choice = '3';
    char user_choice = 'y';

    do
    {
        cout<<"3x3 or 4x4 board size? (Enter 3 or 4): ";
        cin>>board_choice;

        if (board_choice == '3')
        {
            game = std::make_unique<TicTacToe3>();
        }
        else if (board_choice == '4') 
        {
            game = std::make_unique<TicTacToe4>();
        }
        else
        {
            cout<<"Invalid choice, try again.\n";
            continue;
        }

        cout<<"\n"<<"Enter first player: ";
        cin>>first_player;

        game->start_game(first_player);

        int position;

        while(!game->game_over())
        {
            cout<<"Enter a position: ";
            cin>>position;
            game->mark_board(position);
            game->display_board();
        }

        cout<<"Play again, enter y or Y? ";
        cin>>user_choice;


    }while(user_choice == 'y' || user_choice == 'Y');

    return 0;
}