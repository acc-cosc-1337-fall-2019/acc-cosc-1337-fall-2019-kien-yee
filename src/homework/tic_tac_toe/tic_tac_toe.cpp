//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win())
	{
		set_winner();
		return true;
	}
	else if (check_board_full())
	{
		winner = "C";
		return true;
	}
	return false;
}

void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}
// position is what user sees when you save posiiton to vector subtract 1 from position
void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
}

string TicTacToe::get_player() const
{
	return next_player;
}

string TicTacToe::get_winner() const
{
	return winner;
}




void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}

bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i +6] != " ")
		{
			return true;
		}
	}
	return false;
}

bool TicTacToe::check_row_win()
{
	for (std::size_t i = 0; i < 7; i+=3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i + 2] != " ")
		{
			return true;
		}

	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	{
		if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " " || pegs[2] == pegs[4] && pegs[4] == pegs[6]
			&& pegs[6] != " ")
		{
			return true;
		}
		
	}
	return false;
}

void TicTacToe::clear_board()
{
	for (auto& i : pegs)
	{
		i = " ";
	}
}

bool TicTacToe::check_board_full()
{
	for (auto i : pegs)
	{
		if (i == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::set_winner()
{
	if (next_player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& board)
{
	for (std::size_t i = 0; i <= 6; i += 3)
	{
		out << board.pegs[i] << "|" << board.pegs[i + 1] << "|" << board.pegs[i + 2] << "\n";
	}
	return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& board)
{
	// TODO: insert return statement here
	int p_position;
	cout << "\nEnter position for " << board.get_player() << " ";
	in >> p_position;
	board.mark_board(p_position);
	return in;
}


