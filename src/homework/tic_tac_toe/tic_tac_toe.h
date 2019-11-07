#include<string>
#include<vector>
#include<iostream>
#ifndef TIC_TAC_TOE_H //header guard 
#define TIC_TAC_TOE_H


using std::cout;
using std::string;
using std::vector;
using std::cin;
using std::ostream;

//h
/*
one class of tic tac toe
*/
class TicTacToe
{
public:
	TicTacToe();
	TicTacToe(int size) : pegs( size*size," " ) {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& board);
	friend std::istream& operator >> (std::istream& in, TicTacToe& board);
	string get_winner() const;
	const std::vector<std::string>& get_pegs();

protected:
	virtual bool check_column_win()=0;
	virtual bool check_row_win()=0;
	virtual bool check_diagonal_win()=0;
	vector<string> pegs;

private:
	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
	string next_player;
	string winner;
	
};

#endif