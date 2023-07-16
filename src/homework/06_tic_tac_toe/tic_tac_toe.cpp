//cpp
#include "tic_tac_toe.h"
#include <cmath>

using namespace std;

bool TicTacToe::game_over()
{
  if (check_column_win()) { 
    set_winner();
    return true;
  }

  if (check_row_win()) { 
    set_winner();
    return true;
  }

  if (check_diagonal_win()) { 
    set_winner();
    return true;
  }

  if (check_board_full()) { 
    winner = "C";
    return true;
  }
  return false;
}

void TicTacToe::start_game(std::string first_player)
{
	player = first_player;
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	pegs[position-1] = player;
	set_next_player();
}

void TicTacToe::display_board() const
{
    int size = static_cast<int>(std::sqrt(pegs.size()));
    for(long unsigned int i = 0; i < pegs.size(); i += size)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2];
        if (size == 4)
        {
           cout<<"|"<<pegs[i+3];
        }
        cout<<"\n";
    }
}

//private functions
void TicTacToe::clear_board()
{
	for(auto& peg: pegs)
	{
		peg = " ";
	}
}

void TicTacToe::set_next_player()
{
	if(player == "X")
	{
		player = "O";
	}
	else
	{
		player = "X";
	}

}

void TicTacToe::set_winner()
{
	if(player == "X")
	{ 
		winner = "O";
	} 
	else 
	{
		winner = "X";
	}
}


bool TicTacToe::check_board_full()
{
	for(long unsigned int i = 0; i < pegs.size(); i++)
	{
		if(pegs[i] == " ")
		{
			return false;
		}
	}

	return true;
}