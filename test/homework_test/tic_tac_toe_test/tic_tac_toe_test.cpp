#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test win diagnolly from top left")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(1);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X
	//X wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test wom diagonally from bottom left")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(7);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X
	//X wins
	REQUIRE(board.game_over() == true);
}

