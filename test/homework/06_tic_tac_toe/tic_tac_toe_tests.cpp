#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
  std::unique_ptr<TicTacToe> game;
  game = std::make_unique<TicTacToe3>();

  game->start_game("X");

  REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe3>();
	
	game->start_game("O");

  	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test if the board is full")
{
    std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe3>();

	game->start_game("X");

    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == true);

    REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Win by first column")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe3>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(7);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by second column")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe3>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by third column")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe3>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by first row")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe3>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by second row")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe3>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(6);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by third row")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe3>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by diagonally from top left")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe3>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by diagonally from bottom left")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe3>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}


TEST_CASE("Test first player set to X 4")
{
  std::unique_ptr<TicTacToe> game;
  game = std::make_unique<TicTacToe4>();

  game->start_game("X");

  REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O 4")
{
  std::unique_ptr<TicTacToe> game;
  game = std::make_unique<TicTacToe4>();

  game->start_game("O");

  REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test if the board is full for 4")
{
    std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe4>();

    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
	game->mark_board(10);
    REQUIRE(game->game_over() == false);
	game->mark_board(11);
    REQUIRE(game->game_over() == false);
	game->mark_board(12);
    REQUIRE(game->game_over() == false);
	game->mark_board(13);
    REQUIRE(game->game_over() == false);
	game->mark_board(14);
    REQUIRE(game->game_over() == false);
	game->mark_board(15);
    REQUIRE(game->game_over() == false);
	game->mark_board(16);
    REQUIRE(game->game_over() == true);

    REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Win by first column for 4")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe4>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(13);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by second column for 4")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe4>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(14);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by third column for 4")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe4>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(15);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by forth column for 4")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe4>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by first row for 4")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe4>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by second row for 4")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe4>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by third row for 4")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe4>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(12);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by forth row for 4")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe4>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by diagonally from top left for 4")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe4>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	
	// Mark board with x
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Win by diagonally from bottom left for 4")
{
	std::unique_ptr<TicTacToe> game;
  	game = std::make_unique<TicTacToe4>();

	game->start_game("X");

	// Mark board with x
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	// Mark board with o
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	// Mark board with x
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}