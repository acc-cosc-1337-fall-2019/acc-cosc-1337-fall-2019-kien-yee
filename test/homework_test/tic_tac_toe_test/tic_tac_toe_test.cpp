#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test win by first column", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins a
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test game over")
{
	TicTacToe board;
	REQUIRE(board.game_over() == false);
}
TEST_CASE("Test set first player X")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
}
TEST_CASE("Test set first player O")
{
	TicTacToe board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
}
TEST_CASE("Test win by second column")
{
	TicTacToe board;
	board.start_game("X"); REQUIRE(board.game_over() == false);
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by third column")
{
	TicTacToe board;
	board.start_game("X"); REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by first row")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	//X wins
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by second row")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X 
	//X wins
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by third row")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(7);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win diagnolly from top left")
{
	TicTacToe board;
	board.start_game("O");
	board.mark_board(1);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O
	//O wins
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "O");
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

	REQUIRE(board.get_winner() == "X");
}
TEST_CASE("Test for no winner")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(1);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X

	//no wins
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "C");
}
