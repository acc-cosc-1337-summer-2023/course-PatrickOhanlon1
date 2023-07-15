#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
  TicTacToe game;

  game.start_game("X");

  REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe game;
	
	game.start_game("O");

  	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test if the board is full")
{
	TicTacToe game;

	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(7);
	game.mark_board(6);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Win by first column")
{
	TicTacToe game;

	game.start_game("X");

	// Mark board with x
	game.mark_board(1);
	// Mark board with o
	game.mark_board(2);
	// Mark board with x
	game.mark_board(4);
	// Mark board with o
	game.mark_board(3);
	// Mark board with x
	game.mark_board(7);

	bool x_wins_by_column = game.game_over() == true && game.get_winner() == "X";
	REQUIRE(x_wins_by_column == true);
}

TEST_CASE("Win by second column")
{
	TicTacToe game;

	game.start_game("X");

	// Mark board with x
	game.mark_board(2);
	// Mark board with o
	game.mark_board(1);
	// Mark board with x
	game.mark_board(5);
	// Mark board with o
	game.mark_board(3);
	// Mark board with x
	game.mark_board(8);

	bool x_wins_by_column = game.game_over() == true && game.get_winner() == "X";
	REQUIRE(x_wins_by_column == true);
}

TEST_CASE("Win by third column")
{
	TicTacToe game;

	game.start_game("X");

	// Mark board with x
	game.mark_board(3);
	// Mark board with o
	game.mark_board(1);
	// Mark board with x
	game.mark_board(6);
	// Mark board with o
	game.mark_board(2);
	// Mark board with x
	game.mark_board(9);

	bool x_wins_by_column = game.game_over() == true && game.get_winner() == "X";
	REQUIRE(x_wins_by_column == true);
}

TEST_CASE("Win by first row")
{
	TicTacToe game;

	game.start_game("X");

	// Mark board with x
	game.mark_board(1);
	// Mark board with o
	game.mark_board(4);
	// Mark board with x
	game.mark_board(2);
	// Mark board with o
	game.mark_board(5);
	// Mark board with x
	game.mark_board(3);

	bool x_wins_by_column = game.game_over() == true && game.get_winner() == "X";
	REQUIRE(x_wins_by_column == true);
}

TEST_CASE("Win by second row")
{
	TicTacToe game;

	game.start_game("X");

	// Mark board with x
	game.mark_board(4);
	// Mark board with o
	game.mark_board(1);
	// Mark board with x
	game.mark_board(5);
	// Mark board with o
	game.mark_board(2);
	// Mark board with x
	game.mark_board(6);

	bool x_wins_by_column = game.game_over() == true && game.get_winner() == "X";
	REQUIRE(x_wins_by_column == true);
}

TEST_CASE("Win by third row")
{
	TicTacToe game;

	game.start_game("X");

	// Mark board with x
	game.mark_board(7);
	// Mark board with o
	game.mark_board(1);
	// Mark board with x
	game.mark_board(8);
	// Mark board with o
	game.mark_board(2);
	// Mark board with x
	game.mark_board(9);

	bool x_wins_by_column = game.game_over() == true && game.get_winner() == "X";
	REQUIRE(x_wins_by_column == true);
}

TEST_CASE("Win by diagonally from top left")
{
	TicTacToe game;

	game.start_game("X");

	// Mark board with x
	game.mark_board(1);
	// Mark board with o
	game.mark_board(2);
	// Mark board with x
	game.mark_board(5);
	// Mark board with o
	game.mark_board(3);
	// Mark board with x
	game.mark_board(9);

	bool x_wins_by_column = game.game_over() == true && game.get_winner() == "X";
	REQUIRE(x_wins_by_column == true);
}

TEST_CASE("Win by diagonally from bottom left")
{
	TicTacToe game;

	game.start_game("X");

	// Mark board with x
	game.mark_board(7);
	// Mark board with o
	game.mark_board(1);
	// Mark board with x
	game.mark_board(5);
	// Mark board with o
	game.mark_board(2);
	// Mark board with x
	game.mark_board(3);

	bool x_wins_by_column = game.game_over() == true && game.get_winner() == "X";
	REQUIRE(x_wins_by_column == true);
}